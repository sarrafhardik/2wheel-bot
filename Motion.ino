void computeMotion( float d, int t) {
  if (Serial.available()) {
    char p = Serial.read();
    Serial.println(p);

    if (p == 'w' || p == 'f') {
      for (short i = 0; i < 100 * d; i++) {
        s1.onestep(1, INTERLEAVE);
        s2.onestep(0, INTERLEAVE);
        delayMicroseconds(t);
      }
    }
    else if (p == 's' || p == 'b') {
      for (short i = 0; i < 100 * d; i++) {
        s1.onestep(0, INTERLEAVE);
        s2.onestep(1, INTERLEAVE);
        delayMicroseconds(t);
      }
    }
    else if (p == 'a' || p == 'l') {
      for (short i = 0; i < 130 * d; i++) {
        s1.onestep(0, INTERLEAVE);
        s2.onestep(0, INTERLEAVE);
        delayMicroseconds(t);
      }
    }
    else if (p == 'd' || p == 'r') {
      for (short i = 0; i < 130 * d; i++) {
        s1.onestep(1, INTERLEAVE);
        s2.onestep(1, INTERLEAVE);
        delayMicroseconds(t);
      }
    }

    s1.release(); s2.release();
  }
}
