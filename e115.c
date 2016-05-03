#include <stdio.h>

int ArrayIndexFinder(char *asBuffer, int chInput)
{
	int i = 0;

	while(asBuffer[i] != 0)
	{
		if(asBuffer[i] == chInput)
			return i;
		++i;
	}
	return -1;
}

void main(void)
{
	char asBuffer[20] = {"I am Programmer!"};
	char chInput;

	puts("문자하나를 입력하시요");
	chInput = getchar();

	printf("%d\n", ArrayIndexFinder(asBuffer, chInput));
}
