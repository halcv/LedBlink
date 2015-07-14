#include <Metro.h>
#include "MainTimer.h"
#include "LedUpdateTimer.h"
#include "Board.h"

#define METRO_10MS_INTERVAL     (10)

static Metro st_Metro10ms = Metro(METRO_10MS_INTERVAL);

static VOID vMainTimer_Interval10msProc();

VOID vMainTimer_Initialize()
{
	vLedUpdateTimer_Initialize();
}

VOID vMainTimer_Main()
{
	if (st_Metro10ms.check() == TRUE) {
		vMainTimer_Interval10msProc();
	}
}

static VOID vMainTimer_Interval10msProc()
{
	vLedUpdateTimer_IncTime();
}
