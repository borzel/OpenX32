/*
  Control software for Behringer X32 using OpenX32
  https://github.com/xn--nding-jua/OpenX32
  v0.0.2, 22.07.2025

  This software uses LVGL and the LVGL Linux Port to display a nice user-interface
  To compile the software just call "make" and a 32-bit ARM-binary should be created
  in the build/bin-folder

  Parts of this software with kind permission of Music Tribe. Thank you!
*/

#include "x32osc-reaper.h"


// the main-function - of course
int main(int argc, char *argv[]) {
    srand(time(NULL));
    printf("OpenX32 OSC Client for Reaper\n");
    printf("v0.0.1, 27.07.2025\n");
    printf("https://github.com/xn--nding-jua/OpenX32\n");

    printf("Connecting to UART1...\n");
    uartOpen();

    printf("Initializing OSC...\n");
    oscInit(argv[1]);

    printf("Initializing X32 Surface...\n");
    surfaceReset(); // resets all microcontrollers on the board
    surfaceInit(); // sets default values for faders, leds and lcds


    // printf("Start Timer...\n");
    // initTimer();

    printf("Wait for incoming data on /dev/ttymxc1...\n");
    printf("Press Ctrl+C to terminate program.\n");
    fflush(stdout);


    while (1) {
      uartRead();

      // OSC
      oscRun();

      // sleep for 1ms to lower CPU-load
      usleep(1000);
    }

  

    return 0;
}


void setBrightnessAll(int value) {
    setBrightness(X32_BOARD_MAIN, value);
    setBrightness(X32_BOARD_L, value);
    //setBrightness(X32_BOARD_M, value);
    setBrightness(X32_BOARD_R, value);
}

void surfaceInit() {
	// set brightness and contrast
    printf("  Setting brightness and contrast for all displays...\n");
    setBrightness(0, 140); // brightness of LEDs
    setBrightness(1, 200);
    setBrightness(4, 255);
    //setBrightness(5, 255);
    setBrightness(8, 255);
    setContrast(0, 0x24); // contrast of LCDs
    setContrast(4, 0x24);
    //setContrast(5, 0x24);
    setContrast(8, 0x24);

//     printf("  Setting Button-LEDs for boards 0 and 1...\n");
//     //setLed(0, 0x00, 1); // boardId 0 = user-section
//     //setLed(1, 0x01, 1); // boardId 1 = EQ-section and monitor
//     //setLed(1, 0x22, 1); // boardId 1 = EQ-section and monitor

//     printf("  Setting Button-LEDs for boards 4, 5 and 8...\n");
//     for (uint8_t i=0; i<=8; i++) {
//       // select-LEDs
//       setLed(4, 0x20+i, 1); // boardId 4 = faderL
//       //setLed(5, 0x20+i, 1); // boardId 5 = faderM
//       setLed(8, 0x20+i, 1); // boardId 8 = faderR

//       // cue leds
//       setLed(4, 0x30+i, 1); // boardId 4 = faderL
//       //setLed(5, 0x30+i, 1); // boardId 5 = faderM
//       setLed(8, 0x30+i, 1); // boardId 8 = faderR

//       // mute leds
//       setLed(4, 0x40+i, 1); // boardId 4 = faderL
//       //setLed(5, 0x40+i, 1); // boardId 5 = faderM
//       setLed(8, 0x40+i, 1); // boardId 8 = faderR

//       // random leds
// //      setLed(4, 0x00+i, 1); // boardId 4 = faderL
// //      setLed(5, 0x00+i, 1); // boardId 5 = faderM
// //      setLed(8, 0x00+i, 1); // boardId 8 = faderR
//     }

    // reset fader ranges from 0...8
    printf("  Setting Faders for boards 4, 5 and 8...\n");
    for (uint8_t i=0; i<=7; i++) {
      setFader(X32_BOARD_L, i, 0x000);
#ifdef X32_MODEL_FULL
      setFader(X32_BOARD_MAIN, i, 0x555 + 0xAA*i);
#endif
      setFader(X32_BOARD_R, i, 0x000);
    }
    setFader(X32_BOARD_R, 8, 0x000);


//     // meterLED ranges from 1...9
//     printf("  Setting VU-Meters for boards 1, 4, 5 and 8...\n");

//     // Meters
//     for (uint8_t i=0; i<=7; i++) {
//         setMeterLed(X32_BOARD_L, i, 0b01010101);
//         setMeterLed(X32_BOARD_R, i, 0b10101010);
//     }
//     setMeterLed(X32_BOARD_R, 8, 0b10000000);

//     //setMeterLed(1, 0, 0b00000011);
//     //setMeterLed(1, 1, 0b11000011);
//     //for (uint8_t i=0; i<=7; i++) {
//     //  setMeterLed(4, i, 0b00000011);
//     //  //setMeterLed(5, i, 0b00001111);
//     //  setMeterLed(8, i, 0b01111111);
//     //}

//     // set some encoders with different options
//     for (uint8_t i=0; i<=100; i++) {
//       setEncoderRing(1, 0, 0, i, true); // boardId, index, ledMode, ledPct, backlight
//       setEncoderRing(1, 1, 0, i, true); // boardId, index, ledMode, ledPct, backlight
//       setEncoderRing(1, 2, 0, i, true); // boardId, index, ledMode, ledPct, backlight
//       setEncoderRing(1, 3, 0, i, true); // boardId, index, ledMode, ledPct, backlight
//       setEncoderRing(1, 4, 0, i, true); // boardId, index, ledMode, ledPct, backlight
//       //setEncoderRing(0, 1, 1, i, true); // boardId, index, ledMode, ledPct, backlight
//       //setEncoderRing(0, 2, 2, i, true); // boardId, index, ledMode, ledPct, backlight
//       //setEncoderRing(0, 3, 3, i, true); // boardId, index, ledMode, ledPct, backlight
//       usleep(5000);
//     }

//     // // set display
//     // printf("  Setting Displays for board 0...\n");
//     // for (uint8_t i=0; i<4; i++) {
//     //   setLcd(0, i, 7, 70, 8, 0xE2, 0x20, 0, 0, "Board 0", 0x00, 0, 48, "OpenX32"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
//     // }

//     printf("  Setting Displays for boards 4, 5 and 8...\n");
//     for (uint8_t i=0; i<=8; i++) {
//       setLcd(4, i, 1, 70, 8, 0xE2, 0x20, 0, 0, "Board 4", 0x00, 0, 48, "huhu"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
//       //setLcd(5, i, 2, 70, 8, 0xE2, 0x20, 0, 0, "Board 2", 0x00, 0, 48, "OpenX32"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
//       setLcd(8, i, 4, 70, 8, 0xE2, 0x20, 0, 0, "Board 8", 0x00, 0, 48, "OpenX32"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
//     }
}

void surfaceLedReset()
{
    // Buttons und LEDs Main ausschalten
    for (int i=0; i<=50; i++) {
      setLed(X32_BOARD_MAIN, i, 0); 
    }

    // Meters
    for (uint8_t i=0; i<=7; i++) {
        setMeterLed(X32_BOARD_L, i, 0b00000000);
        setMeterLed(X32_BOARD_R, i, 0b00000000);
    }
    setMeterLed(X32_BOARD_R, 8, 0b00000000);

    for (uint8_t i=0; i<=7; i++) {
      // select-LEDs
      setLed(X32_BOARD_L, 0x20+i, 0); // boardId 4 = faderL
      setLed(X32_BOARD_R, 0x20+i, 0); // boardId 8 = faderR

      // solo leds
      setLed(X32_BOARD_L, 0x30+i, 0); // boardId 4 = faderL
      setLed(X32_BOARD_R, 0x30+i, 0); // boardId 8 = faderR

      // mute leds
      setLed(X32_BOARD_L, 0x40+i, 0); // boardId 4 = faderL
      setLed(X32_BOARD_R, 0x40+i, 0); // boardId 8 = faderR
    }

    // Faders
    for (uint8_t i=0; i<7; i++) {
      setFader(X32_BOARD_L, i, 0);
      setFader(X32_BOARD_R, i, 0);
    }

    // MAIN Fader
    setFader(X32_BOARD_R, 8, 0);
    setLedByNr(X32_BTN_MAIN_SELECT, 0);
    setLedByNr(X32_BTN_MAIN_SOLO, 0); 
    setLedByNr(X32_BTN_MAIN_MUTE, 0);
    
}

int led_index = 0;

// function will be called by uart-receive-function
void surfaceCallback(uint8_t boardId, uint8_t class, uint8_t index, uint16_t value) {
if (class == 'f') {
      float pct = value / 40.95; // convert to percent
      printf("Fader   : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%04X = %f\n", boardId, class, index, value, pct);
	  

    float brightness_f = (pct * 255)/100;
    int brightness = (int)brightness_f;

    printf("Brightness: %02X", brightness);
    setBrightness(X32_BOARD_L, brightness);

  }else if (class == 'b') {
      	    
      bool pressed = (value >> 7);
      int buttonIndex = (uint16_t)(value & 0x7F);
      int buttonNr = ((uint16_t)boardId << 8) + buttonIndex;
      

      // register buttons
      if (pressed){

        printf("Button boardId=0x%02X class=0x%02X index=0x%02X data=0x%02X pressed=%d index=0x%02X number=0x%02X\n", boardId, class, index, value, pressed, buttonIndex, buttonNr);

        switch (buttonNr) {
          case X32_BTN_UP:
            setLed(X32_BOARD_R, led_index, 1);
            printf("LED: Index = 0x%02X, %d\n", led_index, led_index);
            led_index++;
            break;
          case X32_BTN_DOWN:
            led_index = 0;
            for (int i=0; i<=0x48; i++) {
              setLed(X32_BOARD_R, i, 0); // boardId 1 = EQ-section and monitor
            }
            printf("LED: All Reset\n");
            break;
          case X32_BTN_CLEAR_SOLO:
            surfaceLedReset();
            break;
          case X32_BTN_MAIN_SELECT:
            surfaceInit();
            break;
          case X32_BTN_MUTE_GROUP_1:
            setBrightnessAll(X32_BRIGHTNESS_1);
            break;
          case X32_BTN_MUTE_GROUP_2:
            setBrightnessAll(X32_BRIGHTNESS_2);
            break;
          case X32_BTN_MUTE_GROUP_3:
            setBrightnessAll(X32_BRIGHTNESS_3);
            break;
          case X32_BTN_MUTE_GROUP_4:
            setBrightnessAll(X32_BRIGHTNESS_4);
            break;
          case X32_BTN_MUTE_GROUP_5:
            setLedByNr(X32_LED_BACKLIGHT_BUS_MIXES_PAN, 1); 
            //setLedByNr(X32_BTN_CH_4_MUTE, 1); 
            break;
          case X32_BTN_MUTE_GROUP_6:
            setLedByNr(X32_LED_BACKLIGHT_BUS_MIXES_PAN, 0); 
            //setLedByNr(X32_BTN_CH_4_MUTE, 0); 
            break;
          case X32_BTN_HOME:
            setLedByNr(X32_BTN_UTILITY, 0);  
            break;
          case X32_BTN_DAW_REMOTE:
            oscSend("/play", "f", 1);
            break;
          default:
              if (boardId == X32_BOARD_L || boardId == X32_BOARD_R ){
                char* action;
                int trackIndex;

                if (buttonIndex >= 0x20 && buttonIndex <= 0x27)
                {
                  action  = "select";
                  trackIndex = buttonIndex - 0x20;
                } 
                else if (buttonIndex >= 0x30 && buttonIndex <= 0x37)
                {
                  action  = "solo";
                  trackIndex = buttonIndex - 0x30;
                }
                else if (buttonIndex >= 0x40 && buttonIndex <= 0x47)
                {
                  action  = "mute";
                  trackIndex = buttonIndex - 0x40;
                }

                char* string;
                asprintf(&string, "/track/%d/%s/toggle", trackIndex + 1, action);

                printf("DEBUG: Send osc string: %s\n", string);

                oscSend(string, "f", 1);
              }
            break;
        }

        
        

      }
  }else if (class == 'e') {
    printf("Encoder : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);
  } else 
  {
    printf("Unbekannt : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);
  }
}

void processMessage(tosc_message *osc) {
    char* oscString = tosc_getAddress(osc);

    char* marker = osc->marker;
    tosc_printMessage(osc);
    osc->marker = marker;

    fflush(stdout);

    // "/track/1/solo"
    //  0123456789012

    if (StartsWith(oscString, "/track/")) {
      int tracknumber = oscString[7] - '0' -1;
      int trackIndex = tracknumber;

      uint8_t board = X32_BOARD_L;
      if (tracknumber >= 9 && tracknumber <=16)
      {
        trackIndex = tracknumber - 8;

#ifdef X32_MODEL_FULL
        board = X32_BOARD_M;
#endif
#ifdef X32_MODEL_COMPACT
        board = X32_BOARD_R;
#endif
      } else if (tracknumber >= 17 && tracknumber <=24)
     {
        trackIndex = tracknumber - 16;

#ifdef X32_MODEL_FULL
        board = X32_BOARD_L;
#endif
#ifdef X32_MODEL_COMPACT
        board = 0xFF; // TODO: implement nothing
#endif 
     }

      if (strcmp(oscString + 9, "mute") == 0) 
      {
        setLedByNr((uint16_t)(board << 8) + 0x40 + trackIndex, tosc_getNextFloat(osc));
      } 
      else if (strcmp(oscString + 9, "solo") == 0) 
      {
        setLedByNr(((uint16_t)board << 8) + 0x30 + trackIndex, tosc_getNextFloat(osc));
      }
      else if (strcmp(oscString + 9, "select") == 0) 
      {
        setLedByNr((uint16_t)(board << 8) + 0x20 + trackIndex, tosc_getNextFloat(osc));
      } 
      else if (strcmp(oscString + 9, "name") == 0) 
      {
        setLcd(board, trackIndex, 7, 70, 8, 0xE2, 0x20, 0, 0, tosc_getNextString(osc), 0x00, 0, 48, "Track");
      } 
      else if (strcmp(oscString + 9, "volume") == 0) 
      {
        setFader(board, trackIndex, (uint16_t)(tosc_getNextFloat(osc) * 0xFFF));
      }
      else if (strcmp(oscString + 9, "vu") == 0) 
      {
        float vu = tosc_getNextFloat(osc);
        int8_t bits = 0;

        // leds = 8-bit bitwise (bit 0=-60dB ... 4=-6dB, 5=Clip, 6=Gate, 7=Comp)
        // 0b10000000 //comp
        // 0b01000000 //gate/pre
        // 0b00100000 //clip == 0db
        // 0b00010000 //-6db
        // 0b00001000 //-12
        // 0b00000100 //-18
        // 0b00000010 //-30
        // 0b00000001 //-60db

        if (vu >= 0.90)
        {
            bits = 0b00111111;
        } 
        else if (vu >= 0.82)
        {
            bits = 0b00011111; // -6db
        }
        else if (vu >= 0.7)
        {
            bits = 0b00001111; // -12db
        }
        else if (vu >= 0.64)
        {
            bits = 0b00000111; // -18db
        }
        else if (vu >= 0.47)
        {
            bits = 0b00000011; // -30db
        }
        else if (vu >= 0.3)
        {
            bits = 0b00000001; // -60db
        }
        else 
        {
            bits = 0b00000000;
        }

        setMeterLed(board, trackIndex,  bits);
      }
    } 
    else if (strcmp(oscString, "/play") == 0) 
    {
        setLedByNr(X32_BTN_DAW_REMOTE, tosc_getNextFloat(osc));
    }

    fflush(stdout);
} 


