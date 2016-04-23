#include <stdio.h>

void main(void)
{
	int x = 1, y = 1;

	for(y = 1; y <=5 ; y++){
		if(y%2 != 0){
			for(x = x; x <= 5*y; ++x){
				printf("%d\t", x);
			}
			putchar('\n');
			x += 4;
		}else{
			for(x = x; x > 5*(y-1); --x){
				printf("%d\t", x);
			}
			putchar('\n');
			x += 6;
		}
	}

}
	
