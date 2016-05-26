//prime_number.c -- 한숫자를 입력받아 그보다 적은 범위에서 소수를 추려내라.
//
#include <stdio.h>
#include <stdlib.h>


void GetPrimeNumber(int);

int *p_prime;

int main(void)
{
	int num;
	int i, j;
	int enter = 0;

	// 먼저 소수의 정의를 알자. 1과 자기자신만 약수로 가진 양수. 1은 소수도 합성수도 아니다. 2는 소수중 유일한 짝수다. 
	// 에라토스테네스의 체를 이용한 알고리즘.
	// 2를 남기고 2의 배수들을 지워나간다. 3을 남기고 3의 배수들을 지워나간다. 
	// 이런식으로 계속 하다가 남은 수만 추려내면 소수가 된다. 
	printf("정수하나를 입력하면 거기까지의 소수를 출력해줄 것입니다: ");
	while(scanf("%d", &num) == 1)
	{
		GetPrimeNumber(num); 	//입력을 받은 수만큼 배열안에 수들을 차례대로 저장.

		for(i = 2; i <= num; i++)
		{
			if(p_prime[i] == 0)  	//0인 수는 넘어감 
				continue;
			for(j = i + i; j <= num; j += i) 	//어떤 식으로 0을 집어넣는지 추적해보자.
				p_prime[j] = 0;
		}

		//출력 부분
		for(i = 2; i < num; i++)
		{
			if(p_prime[i] != 0)
			{
				printf("%d\t", p_prime[i]);
				// 10칸식 나누어서 출력
				enter++;
				if(enter % 10 == 0)
					putchar('\n');
			}
		}
		putchar('\n');
		printf("더 입력하실래요? (나가기는 q): ");
	}

	free(p_prime);

	return 0;
}

void GetPrimeNumber(int num)
{
	int i;

	p_prime = (int*)malloc(sizeof(int) * num);

	for(i = 2; i <= num; i++)
		p_prime[i] = i;
}
