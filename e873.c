#include <stdio.h>

void main(void)
{
	int x = 0, y, z = 1;

	for(y = 1; y <= 5; ++y){
		for (x = 5; x >= 1; --x){
			if(x <= y){
				printf("%d", z);
				z++;
			}
			putchar('\t');
		}
		putchar('\n');
	}
}
			
