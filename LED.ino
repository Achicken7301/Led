int led[4] = {3, 5, 6, 9};
int len = sizeof(led) / sizeof(led[0]);
int brightness = 0;
int fadeAmount = 5;
const int PlusButtonPin = 2;
const int MinusButtonPin = 4;
int gear[4] = {0, 1, 2, 3};
int len_gear = sizeof(gear) / sizeof(gear[0]);
int buttonState = 0;
int state = 0;
int duration = 100;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < len; i++) {
    pinMode(led[i], OUTPUT);
  }
  pinMode(PlusButtonPin, INPUT);
  pinMode(MinusButtonPin, INPUT);
}

void loop() {
  int value = analogRead(A0);
  int led_analog = map(value, 0, 1023, 0, 255);
  Serial.println(led_analog);
  int tactile_state = PlusTactileState();
  tactile_state = MinusTactileState();
  Serial.println(tactile_state);
  switch (tactile_state) {
    case 0:
      LedModeFirst(led_analog);
      break;
    case 1:
      LedModeSecond(100, led_analog);
      break;
    case 2:
      LedModeThird(100, led_analog);
      break;
    case 3:
      LedModeFourth(100, led_analog);
      break;
  }
}
