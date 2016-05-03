#include <stdio.h>

int GetLength(char *psData)
{
	int nCount = 0;
	
	while(*(psData + nCount) != '\0')
		++nCount;
	return nCount;
}

void RevertString(int nResult, char *psData)
{
	for(nResult; nResult >= 0; --nResult)
		printf("%c", *(psData + nResult));
	putchar('\n');
}

void main(void)
{
	int nResult = 0;
	char psData[34] = {0};

	printf("문자열을 입력하세요\n");
	fgets(psData, sizeof(psData), stdin);
	nResult = GetLength(psData);
	printf("문자열의 갯수는 %d입니다.\n", nResult);
	RevertString(nResult, psData);
}
