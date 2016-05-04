#include <stdio.h>
#include <string.h>

void main(void)
{
	char aszBuffer[128] = {0};
	char *sToken = " ";
	char *paszBuffer = NULL;

	puts("Input String:");
	fgets(aszBuffer, sizeof(aszBuffer), stdin);
	
	paszBuffer = strtok(aszBuffer, sToken);
	
	while(paszBuffer != NULL)
	{
		puts(paszBuffer);
		paszBuffer = strtok(NULL, sToken);
	}
}
