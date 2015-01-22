#ifndef __CURSOR_CONTROL__
#define __CURSOR_CONTROL__

#include <stdlib.h>
#include <stdio.h>

void curMoveUp(int lineNum=1)
{
	printf("\033[%dA",lineNum);
}

void curMoveDown(int lineNum=1)
{
	printf("\033[%dB",lineNum);
}

void eraseLine()
{
	printf("\r");
	printf("\033[K");
}
#endif
