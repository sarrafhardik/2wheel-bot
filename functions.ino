int tDistance() {
  pinMode(TEP, OUTPUT);
  digitalWrite(TEP, LOW);   delayMicroseconds(2);  //Activating Ultrasonic sensor
  digitalWrite(TEP, HIGH);  delayMicroseconds(10); //Activating Ultrasonic sensor
  digitalWrite(TEP, LOW);

  pinMode(TEP, INPUT);
  return ((int)(pulseIn(TEP, HIGH) * 0.017));
}

void saftDistance() {
  if (tDistance() < 15) {
    if (tDistance() < 7) {
      beep(400, 50); delay(50);
    }
    else {
      beep(600, 200); delay(200);
    }
  }
}

//-----------------------------------------------------------------//
//---------------------------Music_f(x)----- ----------------------//
//-----------------------------------------------------------------//

void beep(short note, short duration) {
  tone(buzzerPin, note, duration); delay(duration);
  noTone(buzzerPin);
}
