#include "Port.h"
#include "Board.h"

VOID vPort_Initialize()
{
	pinMode(LED_OUT_PORT,OUTPUT);
	digitalWrite(LED_OUT_PORT,LOW);
}

VOID vPort_LedBlink()
{
	digitalWrite(LED_OUT_PORT,!digitalRead(LED_OUT_PORT));
}
