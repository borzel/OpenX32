#include "osc.h"


char oscBuffer[2048]; // declare a 2Kb buffer to read packet data into
int oscFd;

void oscInit(){
     oscFd = socket(AF_INET, SOCK_DGRAM, 0);
    fcntl(oscFd, F_SETFL, O_NONBLOCK); // set the socket to non-blocking
    struct sockaddr_in sin;
    sin.sin_family = AF_INET;
    sin.sin_port = htons(9000);
    sin.sin_addr.s_addr = INADDR_ANY;
    bind(oscFd, (struct sockaddr *) &sin, sizeof(struct sockaddr_in));
    printf("OpenX32 is now listening on port 9000.\n");

}

void oscRun(){

    fd_set readSet;
    FD_ZERO(&readSet);
    FD_SET(oscFd, &readSet);
    struct timeval timeout = {0, 0}; 
    if (select(oscFd+1, &readSet, NULL, NULL, &timeout) > 0) {
      struct sockaddr sa; // can be safely cast to sockaddr_in
      socklen_t sa_len = sizeof(struct sockaddr_in);
      int len = 0;
      while ((len = (int) recvfrom(oscFd, oscBuffer, sizeof(oscBuffer), 0, &sa, &sa_len)) > 0) {
       
        if (tosc_isBundle(oscBuffer)) {
          tosc_bundle bundle;
          tosc_parseBundle(&bundle, oscBuffer, len);
          const uint64_t timetag = tosc_getTimetag(&bundle);
          tosc_message osc;
          while (tosc_getNextMessage(&bundle, &osc)) {
            printMessage(&osc);
          }
        } else {
          tosc_message osc;
          tosc_parseMessage(&osc, oscBuffer, len);
          printMessage(&osc);
        }
      }
    }

    
}

void printMessage(tosc_message *osc) {

    // simple test
    char* address = tosc_getAddress(osc);
    if (strcmp(address, "/track/1/mute") == 0) 
    {
        setLedByNr(X32_BTN_BOARD_L_CH_1_MUTE, tosc_getNextFloat(osc));
    } else if (strcmp(address, "/track/1/solo") == 0) 
    {
        setLedByNr(X32_BTN_BOARD_L_CH_1_SOLO, tosc_getNextFloat(osc));
    } else if (strcmp(address, "/track/1/select") == 0) 
    {
        setLedByNr(X32_BTN_BOARD_L_CH_1_SELECT, tosc_getNextFloat(osc));
    } 


}


void oscSend(float onOff)
{
    // declare a buffer for writing the OSC packet into
    char buffer[1024];

    struct sockaddr_in sout;
    
    int fd = socket(AF_INET,SOCK_DGRAM,0);
    if(fd<0){
        perror("cannot open socket");
        return false;
    }
    
    sout.sin_family = AF_INET;
    sout.sin_port = htons(8000);
    sout.sin_addr.s_addr = inet_addr("192.168.188.104");

    // simple test
    int len = tosc_writeMessage(buffer, sizeof(buffer), "/track/1/select", "f", onOff);

    if (sendto(fd, buffer, len+1, 0, // +1 to include terminator
               &sout, sizeof(sout)) < 0){
        perror("cannot send message");
        close(fd);
        return false;
    }

    close(fd);
    
    printf("oscSend() Ende");
}