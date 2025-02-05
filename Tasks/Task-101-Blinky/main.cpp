#include "mbed.h"

// Create a DigitalOut “object” called greenLED. Pass constant LED1 as a “parameter”
DigitalOut greenLED(LED2);
DigitalOut blueLED(PB_0);
DigitalOut redLED(LED3);

//These are "commented out" and so are not part of the program. You can uncomment them by removing the // characters
//Your task is to make a sequence alternating between Green+Red and just Blue 
//DigitalOut blueLED(LED2);
//DigitalOut redLED(LED3);

//The main function - all executable C / C++ applications have a main function. This is our entry point in the software
int main() 
{
    // ALL the repeating code is contained in a  “while loop”
    while(1<2) 
    { 
        //The code between the { curly braces } is the code that is repeated forever

        // Turn onboard LED ON  
        greenLED = 1; 

        // Wait 1 second (1 million microseconds)
        wait_us(500000); 

        // Turn LED OFF
        greenLED = 0;

        // Wait 1 second

        blueLED = 1;
        redLED = 1; 

        wait_us(500000);

        blueLED = 0;
        redLED = 0;

    
    }
}