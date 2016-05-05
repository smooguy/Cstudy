#include <stdio.h>

char asBuffer[128];

void PrintData(void)
{
	puts(asBuffer);
}

void main(void)
{
	puts("Input string:");
	fgets(asBuffer, sizeof(asBuffer), stdin);

	PrintData();
}
