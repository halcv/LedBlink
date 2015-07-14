#include <Metro.h>
#include "MySystype.h"
#include "Port.h"
#include "MainTimer.h"
#include "LedUpdateProcess.h"

static VOID vMain_Initialize();

VOID setup()
{
	vMain_Initialize();
}

VOID loop()
{
	vMainTimer_Main();
	vLedUpdateProcess_Main();
}

static VOID vMain_Initialize()
{
	vPort_Initialize();
	vLedUpdateProcess_Initialize();
	vMainTimer_Initialize();
}
