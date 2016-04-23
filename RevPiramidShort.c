#include <stdio.h>

void main(void)
{
	int x, y, nCounter = 0, nOffset = 1;

	for(y = 0; y < 5; ++y)
	{
		for(x = 0; x < 5; ++x)
			printf("%d\t", nCounter += nOffset);

		if(y%2 == 0) nCounter += 6;  //홀수행 증감수치
		else		 nCounter += 4;  //짝수행 증감수치

		nOffset = -nOffset; //부호를 바꾸어 증감과 감소를 한다.
		putchar('\n');
	}
}
