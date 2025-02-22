struct MyData {
  int id;
  float value;
  bool status;
};

MyData receivedData;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() >= sizeof(receivedData)) {
    Serial.readBytes((byte*)&receivedData,
                     sizeof(receivedData));
    Serial.print("ID:  ");
    Serial.print(receivedData.id);
    Serial.print("Value: ");
      Serial.print(receivedData.value);
    Serial.print("Status:  ");
      Serial.println(receivedData.status);
  }
}
