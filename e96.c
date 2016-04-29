#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	int nInput = 0, sInput = 0, i = 0;

	char **pszHeap = NULL;

	scanf("%d", &nInput);
	getchar();
	pszHeap = (char**)calloc(nInput, sizeof(char*));
	
	scanf("%d", &sInput);
	getchar();
	for(i = 0; i < nInput; ++i)
	{
		pszHeap[i] = (char*)calloc(sInput, sizeof(char));
		printf("문자열을 입력하세요.%d\n", i);
		fgets(pszHeap[i], sInput, stdin);
	}
	for(i = 0; i < nInput; ++i)
	{
		puts(pszHeap[i]);
		free(pszHeap[i]);
	}
	free(pszHeap);
}
