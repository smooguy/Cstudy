//ctype.c -- 문자열을 읽어들여 ctype.h관련 함수들을 사용한다.
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch = 0;
	int cnum = 0;
	int wnum = 0;
	int isupnum = 0;
	int islownum = 0;
	int ispunnum = 0;
	int isdignum = 0;
	bool flag = true;

	while((ch = getchar()) != EOF)
	{
		cnum++;
		if(!isspace(ch) && flag == true)
		{
			flag = false;
			wnum++;
		}
		else if(isspace(ch) && flag == false)
			flag = true;
		if(isupper(ch))
		{
			isupnum++;
			continue;
		}
		else if(islower(ch))
		{
			islownum++;
			continue;
		}
		else if(ispunct(ch))
		{
			ispunnum++;
			continue;
		}
		else if(isdigit(ch))
		{
			isdignum++;
			continue;
		}
	}
	printf("---------------------------------\n");
	printf("총 문자수 = %d,   총 단어수 = %d\n", cnum, wnum);
	printf("총 대문자 = %d,   총 소문자 = %d\n", isupnum, islownum);
	printf("총 구둣점 = %d,   총 숫  자 = %d\n", ispunnum, isdignum);
	printf("---------------------------------\n");

	return 0;
}
