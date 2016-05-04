#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>

void man(void)
{
	char asBuffer[128] = {0};
	wchar_t awsBuffer[128] = {0};

	puts("Input String:");
	fgets(asBuffer, sizeof(asBuffer), stdin);

	mbstowcs(awsBuffer, asBuffer, 256);

	wprintf(L"%s", awsBuffer);
}
