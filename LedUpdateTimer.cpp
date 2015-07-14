#include "LedUpdateTimer.h"
#include "Board.h"

#define TIME_MAX    (10) // 100ms

static UI_16 st_unTime;
static UI_8 st_ucTimeout;

VOID vLedUpdateTimer_Initialize()
{
	st_unTime = 0;
	st_ucTimeout = YET_TIMEOUT;
}

VOID vLedUpdateTimer_IncTime()
{
	if (st_unTime < (TIME_MAX - 1)) {
		st_unTime++;
	} else {
		st_ucTimeout = NOW_TIMEOUT;
	}
}

UI_8 ucLedUpdateTimer_CheckTime()
{
	UI_8 ucRet = st_ucTimeout;
	if (ucRet == NOW_TIMEOUT) {
		vLedUpdateTimer_Initialize();
	}

	return ucRet;
}
