#include <stdio.h>

void main(void)
{
	int nSum = 0, i, f = 0;

	for(i = 1; i <= 100 ; i++){

		if(i%4 == 0){
			f++;	
			nSum += i;
			printf("%d ", i);
		}

	}
	putchar('\n');
	printf("4의 배수의 갯수는 %d이며, 총합은 %d입니다.\n", f, nSum);
}

