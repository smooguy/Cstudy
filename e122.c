#include <stdio.h>
#include <string.h>

void main(void)
{
	char aszBuffer[2][123] = {0};
	int sLength1 = 0, sLength2 = 0;

	puts("Input 1st String : ");
	fgets(aszBuffer[0], sizeof(aszBuffer[0]), stdin);
	puts("Input 2nd string : ");
	fgets(aszBuffer[1], sizeof(aszBuffer[1]), stdin);

	sLength1 = strlen(aszBuffer[0]);
	sLength2 = strlen(aszBuffer[1]);

	if(sLength1 > sLength2)
		puts(aszBuffer[0]);
	else if (sLength1 < sLength2)
		puts(aszBuffer[1]);
	else
		puts("Same Same!");
}
		
