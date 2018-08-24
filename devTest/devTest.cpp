
#include "windows.h"
#include <iostream>
#include "..\vDevInterface\vDevInterface.h"


int main()
{
	BOOL bus = isVBusExists();
	if (bus)
		printf("Virtual Xbox bus exists\n\n");
	else
	{
		printf("Virtual Xbox bus does NOT exist - Aborting\n\n");
		getchar();
		return -1;
	}
	UCHAR nEmpty;
	GetNumEmptyBusSlots(&nEmpty);
	BOOL res = GetNumEmptyBusSlots(&nEmpty);
	if (res)
		printf("\n\nNumber of Empty Slots: %d\n", nEmpty);
	else
		printf("\n\nCannot determine Number of Empty Slots");
	return 0;

}