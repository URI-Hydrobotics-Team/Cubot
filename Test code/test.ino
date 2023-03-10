#define LED 13 // Defining an LED variable as 13 because our LED is connected to pin 13
void setup() {
  pinMode(LED, OUTPUT); // Set LED pin as OUTPUT
}

void loop() {
  digitalWrite(LED, HIGH);    // turn LED ON by writing HIGH (Sending 5v to pin 13)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);     // turn LED OFF by writing LOW (Sending 0v to pin 13)
  delay(1000);                       // wait for a second
}