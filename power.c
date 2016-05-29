//power.c 어떤수의 멱승을 구한다. 음수도 되는...

#include <stdio.h>

#define DOUBLENUM 2
#define INTNUM 4

double Power(double, int);
double Rpower(double, int);

int main(void)
{
	printf("%g\n", Power(DOUBLENUM, INTNUM));
	printf("%g\n", Rpower(DOUBLENUM, INTNUM));
	return 0;
}

double Power(double dnum, int inum)
{
	double total = 1.0;
	int i;

	if(inum == 0)
	{
		puts("어떤수의 0승은 1입니다.");
		total = 1;
	}
	else if(dnum == 0) 
	{
		puts("0의 곱은 당연히 0입니다.");
		total = 0;
	}
	else if(inum > 0)
	{
		for(i = 1; i <= inum; i++)
			total *= dnum;
	}
	else if(inum < 0)
	{
		for(i = 1; i <= -inum; i++)
			total *= dnum;
		total = 1.0 / total;
	}

	return total;
}


double Rpower(double dnum, int inum)
{
	double total = 1.0;

	if(inum == 0)
		total = 1;
	else if(dnum == 0) 
		total = 0;
	else if(inum > 0)
		total = dnum * Rpower(dnum, inum - 1);
	else if(inum < 0)
	{
		total = dnum * Rpower(dnum, (-inum) - 1);
		total = 1.0 / total;
	}

	return total;
}
