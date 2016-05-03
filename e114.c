#include <stdio.h>

void MultiSum(int nData)
{
	int i;
	for(i = 1; i < 10; ++i)
		printf("%d\t", nData * i);
	putchar('\n');
}

void main(void)
{
	int nData;

	puts("수 하나를 입력하시요:");
	scanf("%d", &nData);
	MultiSum(nData);
}
