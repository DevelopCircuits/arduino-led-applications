#define LED 2 // Arduino pin connected the positive side of LED

void setup()   {
  pinMode(LED, OUTPUT); // Declare the LED as an output in the circuit
}

void loop()   {
  digitalWrite(LED, HIGH); // LED is turned on
  delay(1000); // Delay for 1000 milliseconds

  digitalWrite(LED, LOW); // LED is turned off
  delay(1000); // Delay for 1000 milliseconds
}