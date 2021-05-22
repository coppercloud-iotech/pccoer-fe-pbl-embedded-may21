int sensorPin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(sensorPin);
  Serial.println(sensorValue);
  delay(1000);
}