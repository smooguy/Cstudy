#include <stdio.h>

void main(void)
{
	char ch, chbInput = ' ';
	int wCount = 0;
	
	while((ch = getchar()) != '\n'){
		if(ch == ' ' || ch == '\t'){
			chbInput = ch;
			continue;
		}else {
			if(chbInput == ' ' || chbInput == '\t'){
				++wCount;
				chbInput = ch;
			}
		}
	}
	printf("%d\n", wCount);
}
