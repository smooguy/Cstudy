//break의 특성. switch문의 특성.
#include <stdio.h>

int main(void)
{
	char ch = 'a'; // 루프진입을 위해. 아무 문자나.

	while(ch != '#')
	{
		ch = getchar(); //입력 받기
		switch(ch)
		{
			case 'c' : 
				printf("1단계\n");
				break;			//break문은 switch문을 벗어나나 루프를 벗어나지 않는다. 허나 if와 쓰였다면 루프를 벗어난다.
			case 'b' :
				printf("1단계\n");
				ch = '#';  	// 루프 종결
				break;
			case 'h' :
				printf("1단계\n");
				printf("3단계\n");
				break;
			case '\n':
				break;
			default :
				printf("1단계\n");
				printf("2단계\n");
				printf("3단계\n");
		}
	}
	printf("종료\n");
	return 0;
}
