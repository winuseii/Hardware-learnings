void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == LOW) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}


// learnt about INPUT_PULLUP, and the seriousness of floating pins and why they should be adressed.
// this is fun imma do more
