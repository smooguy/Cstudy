//powerlaw.c -- 인자로 받은 수의 멱승을 구한다.
//인자로 받는 수는 문자열로 인식되어진다.
//이것을 수로 변환하는 함수를 이용해서 수치화 할 수 있다.
// atoi() 와 atof() 가 있다.
#include <stdio.h>
#include <stdlib.h>
double PowerNum(double dnum, int num);



int main(int argc, char *argv[])
{
	int i;

	double dnum;
	int num;

	dnum = atof(argv[1]);
	num = atoi(argv[2]);

	if(num == 0)
		dnum = 1;
	else if(num == 1)
		dnum = dnum;
	else if(num >= 2)
		dnum = PowerNum(dnum, num);
		
	printf("%g\n", dnum);

	return 0;
}

double PowerNum(double dnum, int num)
{
	if(num >= 2)
		return dnum*PowerNum(dnum, num - 1);
}
