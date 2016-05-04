#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	int nInput = 0, cInput = 0;
	

	srand((unsigned)time(NULL));

	puts("가위(0), 바위(1), 보(2) 게임입니다. 원하는 것의 숫자를 적으세요");
INPUT:
	scanf("%d", &nInput);

	cInput = rand() % 3;

	if(nInput == cInput || nInput > 2 || nInput < 0)
	{		
		puts("Same Same! 다시 입력하세요");
		goto INPUT;
	}
	else if(nInput == 2)
	{
		if(cInput == 0)
			printf("보(%d) Vs 가위(%d) : 컴퓨터가 이겼어요!!\n", nInput, cInput);
		else if	(cInput == 1)
			printf("보(%d) Vs 바위(%d) : 당신이 이겼어요!!\n", nInput, cInput);
	}
	else if(nInput == 1)
	{
		if(cInput == 0)
			printf("바위(%d) Vs 가위(%d) : 당신이 이겼어요!!\n", nInput, cInput);
		else if(cInput == 2)
			printf("바위(%d) Vs 보(%d) : 컴퓨터가 이겼어요!!\n", nInput, cInput);
	}
	else if(nInput == 0)
	{
		if(cInput == 1)
			printf("가위(%d) Vs 바위(%d) : 컴퓨터가 이겼어요!!\n", nInput, cInput);
		else if(cInput == 2)
			printf("가위(%d) Vs 보(%d) : 당신이 이겼어요!!\n", nInput, cInput);
	}

}
