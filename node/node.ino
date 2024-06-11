void setup() {
  Serial.begin(9600);
  Serial.println("Wemos started and waiting for serial data...");
}

void loop() {
  if (Serial.available()) {
    char data_rcvd = Serial.read();  // Read one byte from the serial buffer and save to data_rcvd

    if (data_rcvd == '1') {
      Serial.println("Switch 1 is On");
    } 

    if (data_rcvd == '2') {
      Serial.println("Switch 2 is On");
    }
  }
}
