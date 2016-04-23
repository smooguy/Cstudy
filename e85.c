#include <stdio.h>

void main(void)
{
	char ch;
	int tCount = 0;

	while(ch != '/'){
		ch = getchar();
		if(ch == 't'){
			tCount++;
		}
	}

	printf("T의 갯수는 %d\n", tCount);
	
}
