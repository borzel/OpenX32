/*
  Control software for Behringer X32 using OpenX32
  https://github.com/xn--nding-jua/OpenX32
  v0.0.2, 22.07.2025

  This software uses LVGL and the LVGL Linux Port to display a nice user-interface
  To compile the software just call "make" and a 32-bit ARM-binary should be created
  in the build/bin-folder

  Parts of this software with kind permission of Music Tribe. Thank you!
*/

#include "x32ctrl.h"

/*
// called every 50ms
void timer50msCallback(int signum) {
}
*/

void timer10msCallback(int sig, siginfo_t *si, void *uc) {
  // call EEZ-GUI tick
  ui_tick();

  // reads data from surface and calls surfaceCallback()
  uartRead();

  // OSC
  oscRun();
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

    printf("  Setting Button-LEDs for boards 0 and 1...\n");
    //setLed(0, 0x00, 1); // boardId 0 = user-section
    //setLed(1, 0x01, 1); // boardId 1 = EQ-section and monitor
    //setLed(1, 0x22, 1); // boardId 1 = EQ-section and monitor

    printf("  Setting Button-LEDs for boards 4, 5 and 8...\n");
    for (uint8_t i=0; i<=8; i++) {
      // select-LEDs
      setLed(4, 0x20+i, 1); // boardId 4 = faderL
      //setLed(5, 0x20+i, 1); // boardId 5 = faderM
      setLed(8, 0x20+i, 1); // boardId 8 = faderR

      // cue leds
      setLed(4, 0x30+i, 1); // boardId 4 = faderL
      //setLed(5, 0x30+i, 1); // boardId 5 = faderM
      setLed(8, 0x30+i, 1); // boardId 8 = faderR

      // mute leds
      setLed(4, 0x40+i, 1); // boardId 4 = faderL
      //setLed(5, 0x40+i, 1); // boardId 5 = faderM
      setLed(8, 0x40+i, 1); // boardId 8 = faderR

      // random leds
//      setLed(4, 0x00+i, 1); // boardId 4 = faderL
//      setLed(5, 0x00+i, 1); // boardId 5 = faderM
//      setLed(8, 0x00+i, 1); // boardId 8 = faderR
    }

    // fader ranges from 0...8
    printf("  Setting Faders for boards 4, 5 and 8...\n");
    for (uint8_t i=0; i<=8; i++) {
      setFader(4, i, 0x000 + 0xAA*i);
      //setFader(5, i, 0x555 + 0xAA*i);
      setFader(8, i, 0xAAA + 0xAA*i);
    }

    // meterLED ranges from 1...9
    printf("  Setting VU-Meters for boards 1, 4, 5 and 8...\n");

    // Meters
    for (uint8_t i=0; i<=7; i++) {
        setMeterLed(X32_BOARD_L, i, 0b01010101);
        setMeterLed(X32_BOARD_R, i, 0b10101010);
    }
    setMeterLed(X32_BOARD_R, 8, 0b10000000);

    //setMeterLed(1, 0, 0b00000011);
    //setMeterLed(1, 1, 0b11000011);
    //for (uint8_t i=0; i<=7; i++) {
    //  setMeterLed(4, i, 0b00000011);
    //  //setMeterLed(5, i, 0b00001111);
    //  setMeterLed(8, i, 0b01111111);
    //}

    // set some encoders with different options
    for (uint8_t i=0; i<=100; i++) {
      setEncoderRing(1, 0, 0, i, true); // boardId, index, ledMode, ledPct, backlight
      setEncoderRing(1, 1, 0, i, true); // boardId, index, ledMode, ledPct, backlight
      setEncoderRing(1, 2, 0, i, true); // boardId, index, ledMode, ledPct, backlight
      setEncoderRing(1, 3, 0, i, true); // boardId, index, ledMode, ledPct, backlight
      setEncoderRing(1, 4, 0, i, true); // boardId, index, ledMode, ledPct, backlight
      //setEncoderRing(0, 1, 1, i, true); // boardId, index, ledMode, ledPct, backlight
      //setEncoderRing(0, 2, 2, i, true); // boardId, index, ledMode, ledPct, backlight
      //setEncoderRing(0, 3, 3, i, true); // boardId, index, ledMode, ledPct, backlight
      usleep(5000);
    }

    // // set display
    // printf("  Setting Displays for board 0...\n");
    // for (uint8_t i=0; i<4; i++) {
    //   setLcd(0, i, 7, 70, 8, 0xE2, 0x20, 0, 0, "Board 0", 0x00, 0, 48, "OpenX32"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
    // }

    printf("  Setting Displays for boards 4, 5 and 8...\n");
    for (uint8_t i=0; i<=8; i++) {
      setLcd(4, i, 1, 70, 8, 0xE2, 0x20, 0, 0, "Board 4", 0x00, 0, 48, "huhu"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
      //setLcd(5, i, 2, 70, 8, 0xE2, 0x20, 0, 0, "Board 2", 0x00, 0, 48, "OpenX32"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
      setLcd(8, i, 4, 70, 8, 0xE2, 0x20, 0, 0, "Board 8", 0x00, 0, 48, "OpenX32"); // setLcd(boardId, index, color, xicon, yicon, icon, sizeA, xA, yA, const char* strA, sizeB, xB, yB, const char* strB)
    }
}

void surfaceReset()
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
      //printf("Fader   : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%04X = %f\n", boardId, class, index, value, pct);
	  //lv_label_set_text_fmt(objects.debugtext, "Fader   : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%04X = %f\n", boardId, class, index, value, pct);

    float brightness_f = (pct * 255)/100;
    int brightness = (int)brightness_f;

    lv_label_set_text_fmt(objects.debugtext, "Brightness: %02X", brightness);
    setBrightness(X32_BOARD_L, brightness);

  }else if (class == 'b') {
      //printf("Button  : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);
	    lv_label_set_text_fmt(objects.debugtext, "Button  : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);


      bool pressed = (value >> 7);
      int buttonNr = ((uint16_t)boardId << 8) + (uint16_t)(value & 0x7F);

      // register buttons
      if (pressed){
      switch (buttonNr) {
        case X32_BTN_UP:
          setLed(X32_BOARD_R, led_index, 1);
          lv_label_set_text_fmt(objects.debugtext1, "LED: Index = 0x%02X, %d\n", led_index, led_index);
          led_index++;
          break;
        case X32_BTN_DOWN:
          led_index = 0;
          for (int i=0; i<=0x48; i++) {
            setLed(X32_BOARD_R, i, 0); // boardId 1 = EQ-section and monitor
          }
          lv_label_set_text_fmt(objects.debugtext1, "LED: All Reset\n");
          break;
        case X32_BTN_CLEAR_SOLO:
          surfaceReset();
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
        case X32_BTN_UTILITY:
          setLedByNr(X32_BTN_UTILITY, 1); 
          break;
        case X32_BTN_BOARD_L_CH_1_SELECT:
          oscSend(1.0f);
          break;
        case X32_BTN_BOARD_L_CH_1_MUTE:
          oscSend(0.0f);
          break;
      }
      }

      // inform LVGL about this new button-press
      guiNewButtonPress(buttonNr, pressed);
  }else if (class == 'e') {
      //printf("Encoder : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);
	  lv_label_set_text_fmt(objects.debugtext, "Encoder : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);
  } else 
  {
    lv_label_set_text_fmt(objects.debugtext, "Unbekannt : boardId = 0x%02X | class = 0x%02X | index = 0x%02X | data = 0x%02X\n", boardId, class, index, value);
  }
}

// the main-function - of course
int main() {
    srand(time(NULL));
    printf("OpenX32 UserInterface\n");
    printf("v0.0.1, 16.07.2025\n");
    printf("https://github.com/xn--nding-jua/OpenX32\n");

    printf("Reading config...");
    char model[12];
    readConfig("/etc/x32.conf", "MDL=", model, 12);
    printf(" Detected model: %s", model);

    printf("Connecting to UART1...\n");
    uartOpen();

    printf("Initializing OSC...\n");
    oscInit();

    printf("Initializing X32 Surface...\n");
    //surfaceReset(); // resets all microcontrollers on the board
    surfaceInit(); // sets default values for faders, leds and lcds

/*
    printf("Start Timer...\n");
    initTimer();

    printf("Wait for incoming data on /dev/ttymxc1...\n");
    printf("Press Ctrl+C to terminate program.\n");
    while (1) {
      uartRead();

      // sleep for 1ms to lower CPU-load
      usleep(1000);
    }
*/

    printf("Initializing GUI...\n");
    guiInit(); // initializes LVGL and FBDEV and starts endless loop

    return 0;
}
