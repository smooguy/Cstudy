#include <stdio.h>
#include <string.h>

void main(void)
{
	char szBuffer[2][128] = {0};
	int sLength = 0;

	puts("Input 1st string:");
	gets(szBuffer[0]);
	//fgets(szBuffer[0], sizeof(szBuffer[0]), stdin);
	puts("Input 2nd string:");
	fgets(szBuffer[1], sizeof(szBuffer[1]), stdin);

	sLength = strlen(szBuffer[0]);

	sprintf(szBuffer[0] + sLength, "%s", szBuffer[1]);

	puts(szBuffer[0]);
}

