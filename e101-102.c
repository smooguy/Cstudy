#include <stdio.h>

void main(void)
{
	int aData[5] = {0};
	int i;

	for(i = 0; i < 5; ++i)
	{
		printf("%p\n", &aData[i]);
	}
	putchar('\n');
	for(i = 0; i < 5; ++i)
	{
		printf("%p\n", aData + i);
	}
	
}
