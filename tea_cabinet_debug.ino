void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);

  pinMode(13, INPUT);
}

void loop() {
  int vin = analogRead(A0);
  int collector = digitalRead(13);
  int base = digitalRead(12);
  int sws1 = digitalRead(2);
  int nsws1 = digitalRead(3);
  int sws2 = digitalRead(4);

  Serial.print("V:");
  Serial.print(vin);
  Serial.print(",C:");
  Serial.print(collector);
  Serial.print(",B:");
  Serial.println(base);

  Serial.print("S1:");
  Serial.print(sws1);
  Serial.print(",!S1:");
  Serial.print(nsws1);
  Serial.print(",S2:");
  Serial.println(sws2);
  Serial.println("------------------------------------------");

  delay(1);
}
