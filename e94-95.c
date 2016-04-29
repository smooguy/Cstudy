#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main(void)
{
	int sLength = 0, nCount = 0;
	char *pszAddr = NULL;
	
	printf("얼마만큼의 문자열을 입력받게 할까요? ");
	scanf("%d", &sLength);
	getchar();

	pszAddr = (char*)calloc(sLength, sizeof(char));

	printf("문자열을 입력하세요.\n");
	fgets(pszAddr, sLength * sizeof(char), stdin);

	while(*(pszAddr + nCount) != '\0'){
		++nCount;
	}
	printf("%d\n", nCount - 1);

	for(nCount;nCount >= 0;--nCount)
	{
		printf("%c", *(pszAddr + nCount));
	}
	putchar('\n');
	free(pszAddr);
}
