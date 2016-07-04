//reverecho.c -- 명령행 전달인자를 역순으로 출력
//argc는 내가 신경쓸 필요없다. 내가 인자를 준 수 만큼 값이 매겨진다.
//argc의 갯수는 명령 자체도 포함한다.
//스페이스 문자가 인자를 구분하며 각각은 argv에 저장된다. 물론 argv[0]은 명령 그자체다.
//공백을 포함한 문자열을 하나의 인자로 취급할 경우는 " "을 붙여주면 된다.
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	int count;

	count = argc - 1;

	for(i = count; i > 0; i--)
	{
		fputs(argv[i], stdout);
		putchar(' ');
	}

	putchar('\n');

	return 0;

}	
