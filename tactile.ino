int TactileState() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    if (state > len_gear - 2) {
      state = 0;
    } else {
      state += 1;
    }
    Serial.println(state);
    Serial.println(gear[state]);
    delay(250);
  }
  return gear[state];
}
