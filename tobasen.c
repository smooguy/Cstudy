//tobasen -- 수 하나를 입력받고 그 수를 진수로 표기한다.
#include <stdio.h>

void ToBaseN(int, int);

int main(void)
{
	int num, base;
	puts("입력한 수를 진수표기를 바꾸어 출력하는 프로그램입니다.");
	printf("원하는 숫자를 입력하세요: ");
	while(scanf("%d", &num) == 1)
	{
		printf("2-10사이의 원하는 진수를 입력하세요: ");
INPUT:
		while(scanf("%d", &base) == 1)
		{
			if(base < 2 || base > 10)
			{
				printf("2-10사이의 숫자가 아니네요.\n다시 입력해주세요(끝내기는 q): ");
				goto INPUT; //계속 다른 숫자를 낼때.
			}
		
			printf("%d를 %d진수로 바꾸면", num, base); 
			ToBaseN(num, base);
			printf("입니다.\n");
			printf("다른 진수로 알아보시려면 2-10숫자를 입력하세요.(나가기는 q): ");
		}
		while(getchar() != '\n')	//q와 개행문자를 지우기
			continue;
		printf("다른 수로 해보시려면 정수를 입력하세요(나가기는 q): ");
	}
	return 0;
}

void ToBaseN(int num, int base)
{
	int r;
	int p;
	switch(base)
	{
		case 2 :
			r = num % 2;
			p = num / 2;
			if(num >= 2)
				ToBaseN(p, base);	//재귀의 역순을 이용한 진수구하기
			break;
		case 3 :
			r = num % 3;
			p = num / 3;
			if(num >= 3)
				ToBaseN(p, base);
			break;
		case 4 :
			r = num % 4;
			p = num / 4;
			if(num >= 4)
				ToBaseN(p, base);
			break;
		case 5 :
			r = num % 5;
			p = num / 5;
			if(num >= 5)
				ToBaseN(p, base);
			break;
		case 6 :
			r = num % 6;
			p = num / 6;
			if(num >= 6)
				ToBaseN(p, base);
			break;
		case 7 :
			r = num % 7;
			p = num / 7;
			if(num >= 7)
				ToBaseN(p, base);
			break;
		case 8 :
			r = num % 8;
			p = num / 8;
			if(num >= 8)
				ToBaseN(p, base);
			break;
		case 9 :
			r = num % 9;
			p = num / 9;
			if(num >= 9)
				ToBaseN(p, base);
			break;
		case 10 :
			r = num % 10;
			p = num / 10;
			if(num >= 10)
				ToBaseN(p, base);
			break;
	}
	printf("%d", r);
}
