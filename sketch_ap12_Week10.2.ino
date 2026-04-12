#include "pitches.h"

const int buttonPin = 5;
const int potPin = A0;
const int buzzerPin = 8;

// notes from pitches.h
int notes[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  int potValue = analogRead(potPin);

  // convert knob value (0–1023) → note index (0–7)
  int index = map(potValue, 0, 1023, 0, 7);

  // safety (prevents weird values)
  index = constrain(index, 0, 7);

  if (buttonState == LOW) {
    tone(buzzerPin, notes[index]);
  } else {
    noTone(buzzerPin);   // silence
  }

  delay(10); // small delay for stability
}