#include <stdio.h>

void main(void)
{
	int anList[4][5] = {0};
	int r, c, nCount = 0;

	for(r = 0; r < 3; ++r)
	{
		for(c = 0; c < 4; ++c)
		{
			anList[r][c] = ++nCount;
			printf("%d\t", anList[r][c]);
			if(c == 3)
			{
				int i, nSum = 0;
				for(i = 0; i < 4; ++i)
					nSum += anList[r][i];
				printf("%d\t", nSum);
				anList[r][i] = nSum;
			}
		}
		putchar('\n');
		if(r == 2)
		{
			for(c = 0; c < 5; ++c)
			{
				int i, nSum = 0;
				for(i = 0; i < 3; ++i)
					nSum += anList[i][c];
				printf("%d\t", nSum);
			}
		putchar('\n');
		}
	}
}
