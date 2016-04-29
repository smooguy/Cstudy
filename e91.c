#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(void)
{
	char pszName[25] = {0};
	char psztoName[25] = {0};

	printf("한글 이름 하나를 입력하세요: ");
	fgets(pszName, 25, stdin);
	printf("한글 이름 다른 하나를 입력하세요: ");
	fgets(psztoName, 25, stdin);
	

	if(pszName[0] != 0 && memcmp(pszName, psztoName, 2) == 0)
		puts("같음\n");
	else
		puts("다름\n");
	
	if(*(short*)pszName == *(short*)psztoName)
		puts("같음\n");
	else
		puts("다름\n");

	if(pszName[0] == psztoName[0] && pszName[1] == psztoName[1])
		puts("같음\n");
	else
		puts("다름\n");
}
