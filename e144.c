#include <stdio.h>
#include <string.h>

void PrintString(char* pszData)
{
	static int sLength = 0;
	int sLengthb = 0;

	sLengthb = sLength;
	sLength = strlen(pszData);
	if(sLength >= sLengthb)
		puts(pszData);
}

void main()
{
	PrintString("Test");
	PrintString("string");
	PrintString("Data");
	PrintString("New");
}
