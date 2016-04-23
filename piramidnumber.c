#include <stdio.h>

void main(void)
{
	int x, y,z = 0, nCounter = 0;

	for(y = 0; y < 5; ++y)
	{
		for(x = 0; x < 5+y ; ++x)
		{
			if( x+y >= 4)	 printf("%d", ++nCounter); //x축과 y축이 만나는 지점을 어떻게 든지 알아내면 된다.
			putchar('\t');
		}
	putchar('\n');
	}
}
