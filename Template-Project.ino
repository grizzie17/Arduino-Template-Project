
#include <YogiDelay.h>
#include <YogiSonic.h>


YogiDelay g_tDelay;

void
setup()
{
	Serial.begin( 9600 );
	g_tDelay.init( 1000 );
}


void loop()
{
	if ( g_tDelay.timesUp())
	{
		Serial.println("----");
	}

}