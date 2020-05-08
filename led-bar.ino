#include <Arduino.h>
#include "LedBar.h"

int pin[6] = {2, 4, 6, 8, 10, 12};
LedBar bar = LedBar(pin);

void setup() {
    Serial.begin(9600);
    for (int a = 0; a < 6; a++) {
        pinMode(pin[a], OUTPUT);
    }
}

void loop() {
    bar.show();
    bar.reverse();
    bar.show();
}
