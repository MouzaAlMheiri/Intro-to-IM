int touch1 = 2;//Foil 1
int touch2 = 3;//Foil 2

int led1 = 8; //LED 1
int led2 = 9; //LED 2

void setup() {
  pinMode(touch1, INPUT_PULLUP); //foil input
  pinMode(touch2, INPUT_PULLUP); //foil input

  pinMode(led1, OUTPUT); foil output
  pinMode(led2, OUTPUT); foil output
  pinMode(LED_BUILTIN, OUTPUT); //for the blinkign
}

void loop() {
  int state1 = digitalRead(touch1); //checks foil 1
  int state2 = digitalRead(touch2); //checks 2

  // LED 1 blinking pattern
  if (state1 == LOW) { // touching foil 1
    digitalWrite(led1, HIGH);// LED on
    delay(300);   //faster blink
    digitalWrite(led1, LOW); //LED off
    delay(300);
  } else {
    digitalWrite(led1, LOW);// Keep off when not touched
  }

  // LED 2 different blinking pattern
  if (state2 == LOW) { // touching foil 2
    digitalWrite(led2, HIGH); // on when touched
    delay(1000);  // slower blink
    digitalWrite(led2, LOW); //LED off
    delay(2000);
  } else {
    digitalWrite(led2, LOW); // :LED off
  }
}
