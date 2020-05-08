#include <Arduino.h>

class LedBar {
private:
    int *_pins = NULL;

public:
    LedBar(int pins[]) {
        this->_pins = pins;
    }

    void show() {
        Serial.println("start::show");
        for (int a = 0; a < 6; a++) {
            Serial.println((String) "pin::" + this->_pins[a]);
            digitalWrite(this->_pins[a], HIGH);
            delay(500);
            digitalWrite(this->_pins[a], LOW);
        }
        Serial.println("end::show");
    }
};

int pin[6] = {2, 4, 6, 8, 10, 12};
LedBar bar = LedBar(pin);

void setup() {
    Serial.begin(9600);
    for (int a = 0; a < 6; a++) {
        pinMode(pin[a], OUTPUT);
    }
}

void loop() {
////    digitalWrite(2, HIGH);
////    Serial.write("High \n");
////    delay(1000);
////    digitalWrite(2, LOW);
////    Serial.write("Low \n");
////    Serial.write("### \n");


//    for (int a = 0; a < 6; a++) {
//        Serial.println(pin[a]);
//        Serial.println("##");
//        digitalWrite(pin[a], HIGH);
//        delay(1000);
//        digitalWrite(pin[a], LOW);
//        delay(500);
//    }

    bar.show();

}
