//alph_piramid.c -- 중첩루프 피라드미드형.
//이 피라미드형은 행을 나타내는 반복문 안에 3가지 형태의 반복문이 들어가 있다.
//
#include <stdio.h>

int main(void)
{
	char input_ch;
	char i_ch; 
	char j_ch = 'A';

	printf("대문자 문자 하나를 입력하세요: ");
	scanf("%c", &input_ch);

	for(i_ch = 'A'; i_ch <= input_ch ; i_ch++) 		// 문자의 순서만큼 돌린다. input_ch ==> 행의 갯수
	{
		for(j_ch = (input_ch -1) ; i_ch <= j_ch; j_ch--)  //앞의 공백부분은 (총행의 갯수 - 1)에서 현재행의 갯수까지 공백문자.	
			putchar(' ');
		for(j_ch = 'A'; i_ch >= j_ch; j_ch++) // A문자부터 현재행의 갯수만큼 오름차순한다.
			putchar(j_ch);
		if(i_ch >= 'B') // 첫행은 문자를 찍지 않고 두번째행부터 
		{
			for(j_ch = (i_ch - 1); j_ch >= 'A' ; j_ch--) //두번째행의 문자를 -1 한 문자부터 내림차순으로 A까지 찍는다.
				putchar(j_ch);
		}
		putchar('\n');
	}
	return 0;
}
