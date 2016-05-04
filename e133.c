#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char ch = '1';
	while(1)
	{
		puts("Hello, world!!");
		if((ch = getchar()) != 0)
		{
			system("clear");
			exit(1);
		}
	}
}
