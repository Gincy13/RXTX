struct MyData {
  int id;
  float value;
  bool status;
};
MyData data;

void setup() {
  Serial.begin(9600);
  data.id = 123;
  data.value = 45.67;
  data.status = true;
}

void loop() {
  Serial.write((byte*)&data, sizeof(data));

  delay(1000);
}
