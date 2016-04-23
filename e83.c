#include <stdio.h>

void main(void)
{
	int x, y;

	for(y = 2; y <= 9; y++){
		for(x = 1; x <= 9; x++){
			printf("%d ", x*y);
		}
		putchar('\n');
	}
}
