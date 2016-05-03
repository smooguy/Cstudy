#include <stdio.h>

int IndexSum(int (*anList)[5], int rowNumber)
{
	
	int x, y, nCounter = 0, nSum = 0;
	
	for(y = 0; y < rowNumber; y++)
	{
		for(x = 0; x < 5; x++)
		{
			++nCounter;
			anList[y][x] = nCounter;
		}
	}
	for(y = 0; y < rowNumber; y++)
	{
		for(x = 0; x < 5; x++)
			nSum += anList[y][x];
	}
	return nSum;
}

int main(void)
{
	int anList[][5] = {0};
	int rowNumber = 0;

	
	puts("행의 갯수를 입력하세요");
	scanf("%d", &rowNumber);

	printf("%d\n", IndexSum(anList, rowNumber));
	return 0;
}
