// Pins for the 3 LEDs are defined
#define LEDred 2 
#define LEDgreen 4
#define LEDyellow 3

void setup() {
  pinMode(LEDred, OUTPUT); 
  pinMode(LEDgreen, OUTPUT); 
  pinMode(LEDyellow, OUTPUT); 
}

void loop() {
  digitalWrite(LEDyellow, LOW);
  digitalWrite(LEDred, HIGH); // Don't move!
  delay(5000);

  digitalWrite(LEDred, LOW); 
  digitalWrite(LEDgreen, HIGH); // You can pass now
  delay(4000);

  digitalWrite(LEDgreen, LOW); 
  digitalWrite(LEDyellow, HIGH); //Caution, reduce speed and prepare to stop
  delay(2000);

}
