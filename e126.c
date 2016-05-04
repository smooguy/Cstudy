#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char aszBuffer[2][128] = {0};

	puts("Input 1st String: ");
	fgets(aszBuffer[0], sizeof(aszBuffer[0]), stdin);
	puts("Input 2nd String: ");
	fgets(aszBuffer[1], sizeof(aszBuffer[1]), stdin);

	if(strcasecmp(aszBuffer[0], aszBuffer[1]) == 0)
		puts("Same Same!");
	else
		puts("Different!");
}
	
