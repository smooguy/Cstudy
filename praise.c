//praise.c -- sizeof()와 strlen()함수
//
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("실례지만 성함이?\n");
	scanf("%s", name);
	printf("반갑습니다. %s 씨. %s\n", name, PRAISE);

	printf("이름은 %zd글자인데 메모리 셀은 %zd개를 차지하고 있군요.\n", strlen(name), sizeof(name)); //개행문자도 포함이다.
	printf("감탄문은 %zd글자인데", strlen(PRAISE));
	printf("메모리 셀은 %zd개를 차지하네요.\n", sizeof(PRAISE)); //널문자까지 포함이다.

	return 0;
}
