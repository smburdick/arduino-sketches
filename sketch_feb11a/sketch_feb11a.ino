#define LED 12
#define T   1000

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH),
  delay(T);
  digitalWrite(LED, LOW);
  delay(T);
}
