//wordcnt.c -- 문자수, 단어수, 개행 수를 카운트한다.
//
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'
int main(void)
{
	char c;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0;
	bool inword = false;

	printf("영문 텍스트를 입력하세요.(나가기는 |):\n");
	prev = '\n';			//개행을 하고 프로그램을 나간 경우가 아닌지 검사
	while((c = getchar()) != STOP)
	{
		n_chars++;		//문자수
		if(c == '\n')
			n_lines++;		//개행 수
		if(!isspace(c) && !inword)   //공백문자가 아니고 단어안에 있지 않을때
		{
			n_words++;
			inword = true;
		}
		if(isspace(c) && inword) 	//공백문자이고 단어안에 있을때
			inword = false;
		prev = c;
	}

	if (prev != '\n')
		p_lines = 1;
	printf("문자 수 = %ld, 단어 수 = %d, 라인 수 = %d, ", n_chars, n_words, n_lines);
	printf("불완전 라인 수 = %d\n", p_lines);

	return 0;
}
