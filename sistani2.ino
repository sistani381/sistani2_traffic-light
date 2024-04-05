int ledgreen = 6;// sets the digital pin 6 as green led
int ledyellow = 7;// sets the digital pin 7 as yellow led
int ledred = 8;// sets the digital pin 8 as red led
void setup() {
  pinMode(8, OUTPUT); // sets the digital pin 8 as OUTPUT
  pinMode(7, OUTPUT);// sets the digital pin 7 as OUTPUT
  pinMode(6, OUTPUT);// sets the digital pin 6 as OUTPUT
}

void loop() {
  digitalWrite(6, HIGH);//sets the digital pin 6 on
  digitalWrite(7, LOW);// sets the digital pin 7 off
  digitalWrite(8, LOW);// sets the digital pin 8 off
  delay(3000);// waits for 3 second
  digitalWrite(6, LOW);// sets the digital pin 6 off
  digitalWrite(7, HIGH);// sets the digital pin 7 on
  digitalWrite(8, LOW);// sets the digital pin 8 off
  delay(1000);// waits for a second
  digitalWrite(6, LOW);// sets the digital pin 6 off
  digitalWrite(7, LOW);// sets the digital pin 7 off
  digitalWrite(8, HIGH);// sets the digital pin 8 on
  delay(2000);// waits for 2 second
}
