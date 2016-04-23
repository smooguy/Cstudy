#include <stdio.h>

void main(void)
{
	int x, y, nCounter = 0;

	for(y = 0; y < 5; ++y)
	{
		if(y%2 == 0)  // 우선 홀수행과 짝수행일때 다르므로 조건식을 걸어준다.
		{
			for(x = 0; x < 5; ++x)
			{
				 printf("%d\t", ++nCounter);
			}
			nCounter += 6;  // 홀수행의 증감되는 수
			putchar('\n');
		}
		else
		{
			for(x = 0; x < 5; ++x)
			{
				printf("%d\t", --nCounter);
			}
			nCounter += 4; // 짝수행의 증감되는 수
			putchar('\n');
		}
	}
}

