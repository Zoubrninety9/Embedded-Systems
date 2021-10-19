#include "mbed.h"

DigitalInOut redLED(PC_2,0);
DigitalInOut greenLED(PC_3,0);
DigitalInOut yellowLED(PC_6,0);

int main()



{
    int count = 0;

    while (count<10) {

        redLED = 1;
        greenLED = 1;
        yellowLED = 1;
        wait_us(2000000)
        redLED = 0;
        greenLED = 0;
        yellowLED = 0;
        wait_us(2000000)

        redLED = 1;
        greenLED = 1;
        yellowLED = 1;
        wait_us(2000000)
        redLED = 0;
        greenLED = 0;
        yellowLED = 0;
        wait_us(2000000)

        redLED = 1;
        greenLED = 1;
        yellowLED = 1;
        wait_us(2000000)
        redLED = 0;
        greenLED = 0;
        yellowLED = 0;
        wait_us(2000000)

        redLED = 1;
        greenLED = 1;
        yellowLED = 1;
        wait_us(2000000)
        redLED = 0;
        greenLED = 0;
        yellowLED = 0;
        wait_us(2000000)

        count = count + 1;



    }
}

