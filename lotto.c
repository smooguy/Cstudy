//lotte.c -- 로또당첨금 갉아먹기
//
#include <stdio.h>

#define SIMPLE 0.024 //연이율
#define LOTTO 2000000000 //최종 당첨금
#define HOUSE 300000000 //집값
#define CAR 150000000 //차값

int main(void)
{
	double Outgo = 0;
	double Sum = LOTTO;
	double IncomeRate = 0;
	double OutgoRate = 0;
	int year;

	printf("당신은 %.2lf원의 로또 당첨금을 받았습니다.\n", Sum);
	printf("먼저 당신은 집과 차를 구입하는데 %.2lf원의 지출이 있었네요\n", (double)(HOUSE + CAR));
	printf("그래서 남은 금액은 %.2lf입니다.\n", Sum -= HOUSE + CAR);
	printf("매달 얼마정도 지출을 하겠습니까?: ");
	scanf("%lf", &Outgo);
	printf("그리고 난 후 매년 당신은 %.3lf%%의 이자를 받으며 매달%.2lf원를 인출합니다.\n", SIMPLE, Outgo);
	
	for(year = 0; Sum >= 0; year++)
	{
		IncomeRate = Sum * SIMPLE; //1년치 수입률
		OutgoRate = Outgo * 12.0; //매달의 지출을 1년치 지출로
		Sum += IncomeRate;
		Sum -= OutgoRate;
		if(IncomeRate - OutgoRate > 0)
		{
			printf("매년 아직 들어오는 돈이 %.2lf만큼 더 많아요! 지출을 늘리세요!\n", IncomeRate - OutgoRate);
			printf("매달 얼마를 더 인출할까요?: ");
			scanf("%lf", &Outgo);
		}
	}
	printf("당신의 로또당첨금은 %d년이면 전부 고갈됩니다. 더 써도 됩니다.\n", year);
	return 0;
}
