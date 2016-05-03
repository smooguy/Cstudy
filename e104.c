#include <stdio.h>

void main(void)
{
	int anList[5][5] = {0};
	int x, y, nCount = 0;

	for(y = 0; y < 5; ++y)
	{
		for(x = 0; x < 5; ++x)
		{
			anList[y][x] = ++nCount;
			printf("%d\t", anList[y][x]);
		}
		putchar('\n');
	}
}
