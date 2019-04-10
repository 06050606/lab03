int val, i;
double Vin, sensorValue, sensorVoltage, R1;
double  ResisterValue = 6185;
void setup() {
  pinMode(A2, INPUT);
  Serial.begin(9600);
}

void loop() {
  for (i = 0; i <= 5; i++)
    sensorValue = 0.7 * sensorValue + 0.3 * analogRead(A2);
  sensorVoltage = sensorValue * 2.5 / 4095;
  R1 = sensorVoltage * ResisterValue / 2.5;
  Serial.println(sensorValue);  //分壓電壓
  Serial.println(sensorVoltage);  //正常電壓值
  Serial.println(R1); //目前量測電阻值
  delay(250);
}
