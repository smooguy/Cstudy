#include <stdio.h>

void main(void)
{
	int x, y, z = 1,count = 5;

	for(y = 5; y <= 9; ++y){
		for(x = 9; x >= 1; --x){
			if(x <= y){
				printf("%d", z);
				z++;
				if(x == count){
					count--;
					break;
				}
			}
			putchar('\t');
		}
		putchar('\n');
	}
}
