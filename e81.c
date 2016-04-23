#include <stdio.h>

void main(void)
{
	int i, nSum = 0;

	for(i = 1; i <= 100; i++){
		nSum += i;
	}
	printf("%d\n", nSum);
}
