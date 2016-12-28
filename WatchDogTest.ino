#include <avr/wdt.h>
void setup()
{
	wdt_disable();  //disable previous watchdog
	Serial.begin(9600);
	Serial.print("hello");
	wdt_enable (WDTO_8S);
	Serial.println(" Watch dog enabled");
}
void loop()
{
	Serial.print(".");
	delay(500);
	//wdt_reset();
}
