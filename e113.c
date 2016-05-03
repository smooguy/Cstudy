#include <stdio.h>

void Ascending(int* anList, int nInput)
{
	int i, nTmp = 0;

	for(i = 0; i < nInput-1; ++i)
	{
		if(anList[i] > anList[i+1])
		{
			nTmp = anList[i+1];
			anList[i+1] = anList[i];
			anList[i] = nTmp;
			for(i ; i >= 0; --i)
			{
				if(anList[i] > anList[i+1])
				{
					nTmp = anList[i+1];
					anList[i+1] = anList[i];
					anList[i] = nTmp;
				}
			}
		}
	}
	for(i = 0; i < nInput; ++i)
		printf("%d\t", anList[i]);
	putchar('\n');
}

void main(void)
{
	int anList[20] = {30, 20, 10, 32, 34, 56, 4, 87, 4, 34, 44, 9, 7, 5, 3};
	int nInput = 0;

	puts("배열 요소의 갯수는?");
	scanf("%d", &nInput);

	Ascending(anList, nInput);
}
