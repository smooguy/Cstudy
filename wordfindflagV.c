#include <stdio.h>

void main(void)
{
	char ch;
	int wCount = 0, nflag = 0;

	while((ch = getchar()) != '\n'){
		if(ch == ' ' || ch == '\t'){
			nflag = 0;
		} else {
			if(nflag == 0) wCount++;
			nflag = 1;
		}
	}
	printf("%d\n", wCount);
}
