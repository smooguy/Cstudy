//divisors.c -- 약수와 소수 구하는 프로그램.
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	long nInput;
	long div;
	int divconunt;
	bool isPrime;
	

	puts("당신이 입력한 정수의 약수와 그 갯수, 그리고 소수인지의 여부도 가져줄 것입니다.");
	printf("정수 하나를 입력하세요.(나가기는 q) : ");
	while(scanf("%ld", &nInput) == 1)
	{
		for(div = 2, isPrime = true,  divconunt = 0 ; (div * div) <= nInput; div++ )
		{
			if(nInput % div == 0)
			{
				if(div * div != nInput)
				{
					printf("%ld와 %ld는 %ld의 약수입니다.\n", div, nInput / div, nInput);
					divconunt += 2;
				}
				else
				{
					divconunt++;
					printf("%ld는 %ld의 약수입니다.\n", div, nInput);
				}
				isPrime = false;
			} 

		}
		if(isPrime)
		{
			divconunt++;
			printf("%ld는 소수입니다.\n", nInput);
		}
		printf("총 %d개의 약수를 가졌네요.\n", divconunt);
		printf("다음 정수 하나를 입력하세요.(나가기는 q) : ");
	}

	return 0;
}
