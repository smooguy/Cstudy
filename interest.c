//rate.c -- 이자계산.
//
#include <stdio.h>

#define SIMPLE 0.1 
#define COMPOUND 0.05

int main(void)
{
	const double principal = 100;

	double SimpleSum = principal;
	double CompoundSum = principal;
	int year;

	puts("원금은 $100입니다. 단리는 10%, 복리는 5%입니다."); //puts함수는 %기호를 나타낼때 그냥써도 된다. printf는 %%해줘야 한다.
	for(year = 0; SimpleSum >= CompoundSum ; year++ )
	{
		CompoundSum += CompoundSum * COMPOUND; //작년치 누계된 저축금의 5%증감. 복리.
		SimpleSum += principal * SIMPLE; //원금의 10%증감. 단리.
	}
	printf("복리가 단리를 초과하는데 걸린 해는 %d년이며 그 때의 단리저축값은 $%.2lf, 복리저축값은 $%.2lf이다.\n", year, SimpleSum, CompoundSum);
	return 0;
}
