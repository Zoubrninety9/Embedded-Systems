// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;

//#define WAIT_TIME_MS 500 
DigitalOut greenLED(TRAF_GRN1_PIN);
Buzzer buzz;
Buttons buttons;

// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)

int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        //On for 500ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(150* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(150 * 1000);  //500ms


         greenLED = 1;
        buzz.playTone("C");
        wait_us(150* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(150 * 1000);  //500ms

         greenLED = 1;
        buzz.playTone("C");
        wait_us(150* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(150 * 1000);  //500ms

         greenLED = 1;
        buzz.playTone("C");
        buzz.playTone("D");

        wait_us(1000* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(450 * 1000);  //500ms

          greenLED = 1;
        buzz.playTone("C");
        wait_us(450* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(450 * 1000);  //500ms

          greenLED = 1;
        buzz.playTone("C");
        wait_us(450* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(450 * 1000);  //500ms

         greenLED = 1;
        buzz.playTone("C");
        wait_us(150* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(150 * 1000);  //500ms

         greenLED = 1;
        buzz.playTone("C");
        wait_us(150* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(150 * 1000);  //500ms

         greenLED = 1;
        buzz.playTone("C");
        wait_us(150* 1000);  //500ms


        //Off for 500ms
        greenLED = 0;
        buzz.playTone("C", Buzzer::HIGHER_OCTAVE);
        wait_us(150 * 1000);  //500ms



        //Pause
        buzz.rest();
        wait_us(500 * 1000);

    }
}