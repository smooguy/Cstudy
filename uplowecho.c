//uplowecho.c -- 인자로 소문자 대문자 변환을 해서 출력하는 프로그램.
//argv[1]부터가 명령행 다음의 인자임을 기억하자.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char ch;

	while((ch = getchar()) != EOF)
	{
		if(strcmp(argv[1], "-p") == 0)
		{
			putchar(ch);
			continue;
		}
		else if(strcmp(argv[1], "-u") == 0)
		{
			putchar(toupper(ch));
			continue;
		}
		else if(strcmp(argv[1], "-l") == 0)
		{
			putchar(tolower(ch));
			continue;
		}
		else
			puts("올바른 인자를 넣으세요. -p(그대로), -u(대문자), -l(소문자)");
			return 0;
	}
	return 0;
}
