void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void setState(int g, int y, int r) {
  digitalWrite(8, g);
  digitalWrite(9, y);
  digitalWrite(10, r);
}

void loop() {
  setState(HIGH, LOW, LOW);
  delay(2000);
  setState(LOW, HIGH, LOW);
  delay(1000);
  setState(LOW, LOW, HIGH);
  delay(2000);
}

//made a traffic light setup using arduino
//debugged the green led being dimmer compared to yellow and red
// WEEEOOOOWWWWEEEEOOOOO
