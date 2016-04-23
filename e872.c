#include <stdio.h>

void main(void)
{
	int x = 1, y, loop = 1;

	for(y = 1; y <= 5; ++y){
		for(x = x; x <= loop; x++){
			printf("%d\t", x);
		}
		loop = x+y;
		putchar('\n');
	}
}
