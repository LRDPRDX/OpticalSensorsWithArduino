#include <ADNS2610.h>

/*Arduino pins*/
#define     SCK_PIN             2
#define     SDIO_PIN            3

using namespace ADNS2610;


Sensor opticalSensor( SCK_PIN, SDIO_PIN );//create sensor object

void setup()
{
    Serial.begin( 9600 );
}


void loop()
{
    uint8_t* frame = new uint8_t[N_PIXELS];

    /*returns number of pixels have been read;
     *could be less than 324*/
    uint16_t nP = optical.GetImage( frame );
    /*Send data to serial port*/
    for( uint16_t i = 0; i < nP; i++ )
    {
        Serial.print( frame[i] );
        Serial.print( " " );
    }
    Serial.println();
    delay( 100 );

    delete frame;
}
