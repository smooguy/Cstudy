#include <stdio.h>

char asBuffer[128];

void PrintData(void);

void main(void)
{
	puts("Input string");
	fgets(asBuffer, sizeof(asBuffer), stdin);

	PrintData();
}
