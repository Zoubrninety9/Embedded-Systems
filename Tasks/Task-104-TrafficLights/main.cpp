#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,0);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

LCD_16X2_DISPLAY lcd;

int main()
{
    while (true)
    {
    red = 1;
    lcd.cls();
    lcd.puts("RED");
    wait_us(5000000);
    red = !red;
    wait_us(1000000);


    amber = 1;
    lcd.cls();
    lcd.puts("Amber");
    wait_us(1000000);
    amber = !amber;
    wait_us(1000000);
    amber = !amber;
    wait_us(1000000);
    amber = !amber;
    wait_us(1000000);
    amber = !amber;
    wait_us(1000000);
    amber = !amber;
    wait_us(1000000);
    amber = !amber;
    wait_us(1000000);
    amber = !amber;
    wait_us(2000000);


    green = 1;
    lcd.cls();
    lcd.puts("Green");    
    wait_us(5000000);
    green = !green;
    wait_us(1000000);

    
    }
}
