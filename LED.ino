// analog
void FourLedOnAnalog(int brightness) {
  for (int i = 0; i < len; i++) {
    analogWrite(led[i], brightness);
  }
}

void FourLedOff() {
  for (int i = 0; i < len; i++) {
    analogWrite(led[i], LOW);
  }
}

void LedModeFirst(int brightness) {
  FourLedOnAnalog(brightness);
}

void LedModeSecond(int duration, int brightness) {
  int len = sizeof(led) / sizeof(led[0]);
  FourLedOnAnalog(brightness);
  delay(duration);
  FourLedOff();
  delay(duration);
}

void LedModeThird(int duration, int brightness) {
  for (int i = 0; i < len; i++) {
    analogWrite(led[i], brightness);
    delay(duration);
  }
  FourLedOff();
  delay(duration);
}


void LedModeFourth(int duration, int brightness) {
  for (int i = 0; i < len; i++) {
    analogWrite(led[i], brightness);
    delay(duration);
    analogWrite(led[i], LOW);
    delay(duration);
  }
}
