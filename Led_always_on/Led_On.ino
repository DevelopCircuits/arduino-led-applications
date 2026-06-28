#define LED 2 // Arduino pin connected the positive side of LED

void setup() {
  pinMode(LED, OUTPUT); // Declare the LED as an output in the circuit

}

void loop() {
  digitalWrite(LED, HIGH); // Always is turned on
}
