#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
	char aszList[2][128] = {0};
	char *pszDynamic = NULL;
	int sLength = 0;

	puts("Input 1st string:");
	//fgets(aszList[0], sizeof(aszList[0]), stdin);
	gets(aszList[0]);
	puts("Input 2nd string:");
	fgets(aszList[1], sizeof(aszList[1]), stdin);

	pszDynamic = malloc(sizeof(char) * 128);
	sLength = strlen(aszList[0]);

	strcpy(pszDynamic, aszList[0]);
	strcpy(pszDynamic + sLength, aszList[1]);
	
	puts(pszDynamic);

	free(pszDynamic);
}
