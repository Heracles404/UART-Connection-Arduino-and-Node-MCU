#define rocker1 A0
#define rocker2 A1

int sw1, sw2;

void setup() {
    Serial.begin(9600);
    pinMode(rocker1, INPUT);
    pinMode(rocker2, INPUT);
}
 
void loop() {
    sw1 = digitalRead(rocker1);
      if (sw1 == HIGH)
      {
        Serial.write('1');
        // Serial.println("1");
      }
     sw2 = digitalRead(rocker2);  
     if (sw2 == HIGH)
      {
        Serial.write('2');
        // Serial.println("2");
      }
}