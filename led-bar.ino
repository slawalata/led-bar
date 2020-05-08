#include <Arduino.h>

class LedBar {
private:
    int *_pins = NULL;

public:
    LedBar(int pins[]) {
        this->_pins = pins;
    }

    void reverse() {
        reverseArray(this->_pins, 0, 5);
    }

    void reverseArray(int *arr, int start, int end) {
        int temp;
        while (start < end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    void show() {
        for (int a = 0; a < 6; a++) {
            delay(500);
            digitalWrite(this->_pins[a], HIGH);
            delay(500);
            digitalWrite(this->_pins[a], LOW);
        }
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
    bar.show();
    bar.show();
    bar.reverse();
    bar.show();
    bar.show();
}
