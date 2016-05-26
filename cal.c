//cal.c 계산기, 사용자 환경 만들기
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int GetMenu(void); 		//메뉴입력을 받고 유효성 검사
float NumberOne(void);  //숫자를 입력받고 유효성 검사
float Numbertwo(int);
int GetChamenu(void);  //문자하나를 입력받고 유효성검사

int main(void)
{
	int index;
	float first_num;
	float second_num;
	
	while((index = GetMenu()) != 'q')
	{
		first_num = NumberOne();
		while(getchar() != '\n')
			continue;
		second_num = Numbertwo(index);
		while(getchar() != '\n')
			continue;

		switch(index)
		{
			case 'a' :
				printf("%g + %g = %g\n", first_num, second_num, first_num + second_num);
				break;
			case 's' :
				printf("%g - %g = %g\n", first_num, second_num, first_num - second_num);
				break;
			case 'm' :
				printf("%g x %g = %g\n", first_num, second_num, first_num * second_num);
				break;
			case 'd' :
				printf("%g / %g = %g\n", first_num, second_num, first_num / second_num);
				break;
		}
	}
	puts("종료!");

	return 0;
}

int GetMenu(void)
{
	int ch;
	printf("********************************************************\n");
	printf("원하는 연산에 해당하는 문자를 선택하시요(끝내려면 q)\n");
	printf("a. add                                   s. subtract\n");
	printf("m. multiply                              d. divide\n");
	printf("q. quit\n");
	printf("********************************************************\n");
	printf(": ");
	ch = GetChamenu();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("a, s, m, d, q중 하나를 입력하셔야 합니다: ");
		ch = GetChamenu();
	}
	return ch;
}

int GetChamenu(void)
{
	int ch;

	ch = getchar();
	while(isspace(ch))  		//문자 앞에 공백문자들을 무시하고 계속 입력을 받는다.
		ch = getchar();
	while(getchar() != '\n')
		continue;

	return ch;
}

float NumberOne(void)
{
	float num;
	char ch;

	printf("첫번째 숫자를 입력하세요: ");
	while(scanf("%f", &num) != 1)		//정상적인 입력이 아닐때 루프를 돈다.
	{
		while((ch = getchar()) != '\n')  //비정상 입력을 화면에 찍어준다.
			putchar(ch);
		printf(":수가 아닙니다. \n25, -178E34, 23.3같은 수를 입력하세요: ");
	}
	return num;
}

float Numbertwo(int index)
{
	float num;
	char ch;

	printf("두번째 숫자를 입력하세요: ");
INPUT:
	while(scanf("%f", &num) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(":정수가 아닙니다. \n25, -178E34, 23.3같은 수를 입력하세요: ");
	}
	if(index == 'd' && num == 0)
	{
		printf("0이 아닌 다른 수를 입력하세요: ");
		goto INPUT;		//계속 0이 아닌 수를 입력할때를 대비해서.
	}
	return num;
}
