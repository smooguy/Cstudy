//typesize.c -- 데이터형의 크기를 출력한다.
//데이타형은 시스템마다 다른 크기를 가질 수 있다.
//이 파일을 컴파일해서 자신의 컴퓨터에서 확인해볼 수 있다.

#include <stdio.h>

int main(void)
{
	puts("===정수형===");
	printf("char형의 크기\t: %zd byte\n", sizeof(char));
	printf("short형의 크기\t: %zd byte\n", sizeof(short));
	printf("int형의 크기\t: %zd byte\n", sizeof(int));
	printf("long형의 크기\t: %zd byte\n", sizeof(long));
	printf("long long형의 크기: %zd byte\n", sizeof(long long));
	puts("===부동소수점형===");
	printf("float형의 크기\t: %zd byte\n", sizeof(float));
	printf("double형의 크기\t: %zd byte\n", sizeof(double));
	printf("long double형의 크기: %zd byte\n", sizeof(long double));

	// %zd포맷은 크기를 나나탠다. (C99표준)

	return 0;
}
