#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int nInput = 0;
	int *pnzInput = NULL;

	scanf("%d", &nInput);
	getchar();
	
	if(nInput > 100)
		nInput = 100;
	else if(nInput < 10)
		nInput = 10;

	pnzInput = calloc(nInput, sizeof(int));
	printf("%d\n", *pnzInput);

	free(pnzInput);

}
