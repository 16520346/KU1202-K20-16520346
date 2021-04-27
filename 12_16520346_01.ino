int npnPin=7;
const int buzzPin=8;
void setup() {
  pinMode(npnPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  tone(buzzPin,200,500);
  Serial.println("Start");
  digitalWrite(npnPin,HIGH);
  delay(5000);
  tone(buzzPin,100,500);
  Serial.println("Stop");
  digitalWrite(npnPin,LOW);
  delay(5000);
}