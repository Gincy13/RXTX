struct MyData {
  int id;
  float value;
  bool status;
};

int m_id{}; float m_value{}; bool m_status{};

MyData receivedData;
void setup() {
  pinMode(13, OUTPUT);
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
  m_id = receivedData.id ;
  m_value = receivedData.value;
  m_status = receivedData.status;

  if(receivedData.id == m_id)
  {
    if(receivedData.value == m_value)
    {
      if(receivedData.status == m_status)
      {
        digitalWrite(13, HIGH);
      }
    }
  }

}
