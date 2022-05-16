int PlusTactileState() {
  buttonState = digitalRead(PlusButtonPin);
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

int MinusTactileState() {
  buttonState = digitalRead(MinusButtonPin);
  if (buttonState == HIGH) {
    if (state == 0) {
      state = 3;
    } else {
      state -= 1;
    }
    Serial.println(state);
    Serial.println(gear[state]);
    delay(250);
  }
  return gear[state];
}

bool IsPress() {
  int PlusButtonState = digitalRead(PlusButtonPin);
  int MinusButtonState = digitalRead(MinusButtonPin);
  if (PlusButtonState == HIGH || MinusButtonState == HIGH) {
    return true;
  }
  return false;
}
