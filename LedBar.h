//
// Created by sanga lawalata on 08/05/20.
//

#ifndef LED_BAR_LEDBAR_H
#define LED_BAR_LEDBAR_H


//
// Created by sanga lawalata on 08/05/20.
//
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


#endif //LED_BAR_LEDBAR_H
