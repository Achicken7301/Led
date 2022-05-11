// analog
void FourLedOnAnalog(int brightness) {
  analogWrite(led[0], brightness);
  analogWrite(led[1], brightness);
  analogWrite(led[2], brightness);
  analogWrite(led[3], brightness);
}

void FourLedOff() {
  analogWrite(led[0], LOW);
  analogWrite(led[1], LOW);
  analogWrite(led[2], LOW);
  analogWrite(led[3], LOW);
}

void LedModeFirst(int brightness) {
  FourLedOnAnalog(brightness);
}

void LedModeSecond(int duration, int brightness) {
  int len = sizeof(led) / sizeof(led[0]);
  FourLedOnAnalog(brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  FourLedOff();
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
}

void LedModeThird(int duration, int brightness) {
  analogWrite(led[0], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[1], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[2], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[3], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  FourLedOff();
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
}


void LedModeFourth(int duration, int brightness) {
  analogWrite(led[0], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[0], LOW);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }


  analogWrite(led[1], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[1], LOW);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }


  analogWrite(led[2], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[2], LOW);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }


  analogWrite(led[3], brightness);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
  analogWrite(led[3], LOW);
  for (int i = 0; i < duration; i++) {
    delay(1);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      break;
    }
  }
}
