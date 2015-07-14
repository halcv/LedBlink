#include "LedUpdateProcess.h"
#include "Port.h"
#include "LedUpdateTimer.h"
#include "Board.h"

VOID vLedUpdateProcess_Initialize()
{
}

VOID vLedUpdateProcess_Main()
{
	if (ucLedUpdateTimer_CheckTime() == YET_TIMEOUT) {
		return;
	}

	vPort_LedBlink();
}
