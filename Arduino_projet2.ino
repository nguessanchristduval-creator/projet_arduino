int led = 13;
int seuil = 25;
float temperature = 26.5; 

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  if (temperature > seuil) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}