const byte ledPin=13;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello");

}

void loop() {
  char val;
  if(Serial.available()){
    val=Serial.read();
    if(val =='1'){
      digitalWrite(7, HIGH);
      Serial.println("LED ON");
    }
    else if(val== '0'){
      digitalWrite(7,LOW);
      Serial.println("LED OFF");
    }
  }
}
