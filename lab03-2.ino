double sensorValue,sensorVoltage,R1;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i <= 5; i++)
    sensorValue = 0.7 * sensorValue + 0.3 * analogRead(A1);
  sensorVoltage = sensorValue * 2.5 / 4095;
  R1 = sensorVoltage * 992700 / 2.5;
  Serial.print("sensorValue:");
  Serial.println(sensorValue);
  Serial.print("sensorVoltage:");
  Serial.println(sensorVoltage);
  Serial.print("R1:");
  Serial.println(R1);
  delay(250);
}
