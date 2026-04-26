//basic Arduino plan for my final project

const int redButton = 2;
const int blueButton = 3;
const int greenButton = 4;

const int buzzer = 8;
const int lightSensor = A0;

void setup() {
  Serial.begin(9600);

  pinMode(redButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(redButton) == LOW) {
    Serial.println("RED_BUTTON");
    tone(buzzer, 800, 100);
  }

  if (digitalRead(blueButton) == LOW) {
    Serial.println("BLUE_BUTTON");
    tone(buzzer, 800, 100);
  }

  if (digitalRead(greenButton) == LOW) {
    Serial.println("GREEN_BUTTON");
    tone(buzzer, 800, 100);
  }

  int lightValue = analogRead(lightSensor);

  if (lightValue < 300) {
    Serial.println("LIGHT_COVERED");
  }

  delay(100);
}
