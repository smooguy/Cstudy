//fibonacci.c -- 파보나치를 재귀가 아닌 루프로.
//fibonacci number란 첫번째 파보나치수는 1이다. 두번째도 1이다. 이 다음부터는 앞의 두수를 더한 값이다.
//나열한면 1, 1, 2, 3, 5, 8, 13, 21... 이 된다.
#include <stdio.h>

unsigned long Fibonacci(unsigned);
unsigned long Rfibonacci(unsigned num);

int main(void)
{
	unsigned num = 5;
	printf("당신이 입력한 수의 파보나치 수를 출력합니다.\n");
INPUT:
	printf("양의 정수 하나를 입력하세요.(나가기는 q): ");
	while(scanf("%d", &num) == 1)
	{
		if(num <= 0)
		{
			printf("잘못 입력하셨습니다\n");
			goto INPUT;
		}
		printf("루프 : %ld\n", Fibonacci(num));
		printf("재귀 : %ld\n", Rfibonacci(num));
	}

	return 0;
}

unsigned long Fibonacci(unsigned num)
{
	unsigned long fib[num];
	unsigned i;
	

	if(num <= 2)
		return 1;
	else
	{
		fib[0] = fib[1] = 1;
		for(i = 2; i < num; i++)
			fib[i] = fib[i - 2] + fib[i - 1];
	}
	return fib[i-1];
}
unsigned long Rfibonacci(unsigned num)
{
	if( num > 2)
		return Rfibonacci(num - 1) + Rfibonacci(num - 2);
	else
		return 1;
}
