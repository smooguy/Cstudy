#include <stdio.h>

void main(void)
{
	int i = 0, nMax, nMin = 0, nInput = 0;

	scanf("%d", &nInput);
	nMax = nMin = nInput;

	for( i = 0; i <= 3; i++){
		scanf("%d", &nInput);
		if(nMax > nInput) {
			nMin > nInput ? (nMin = nInput) : nMin;
		}
		else{ 
			nMax = nInput;
		}
	}	
	printf("Max : %d, Min : %d\n", nMax, nMin);


}

