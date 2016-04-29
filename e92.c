#include <stdio.h>
#include <string.h>

void main(void)
{
	int nInput = 0, nnInput =0;
	int *pnInput[2] = {0, 0};

	printf("두 정수를 입력하시요: ");

	scanf("%d %d", &nInput, &nnInput);
	pnInput[0] = &nInput;
	pnInput[1] = &nnInput;

	if(memcmp(pnInput[0], pnInput[1], 4) == 0)
		printf("같음\n");
	else
		printf("다름\n");
}


