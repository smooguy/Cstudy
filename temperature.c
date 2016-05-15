//temperature.c -- 화씨온도를 입력받아 절대온도와 섭씨온도를 출력.
//
#include <stdio.h>

void Temperature(double Npara);

int main(void)
{
	double d_input;

	puts("화씨온도를 입력받아 절대온도와 섭씨온도를 출력할 것입니다.");
	printf("화씨온도를 입력하세요: ");
	while(scanf("%lf", &d_input) == 1) //숫자를 입력받는 동안은 루프를 계속 돈다. scanf()가 숫자하나를 입력받았으므로 1을 반환한다.
	{
		Temperature(d_input);
		printf("화씨온도를 입력하세요: ");
	}
	return 0;
}

void Temperature(double Npara)
{
	const double A_TEMP = 5.0, B_TEMP = 9.0, C_TEMP = 32.0;
	const double D_TEMP = 273.16;

	double  d_aTemp, d_bTemp;

	d_aTemp = A_TEMP / B_TEMP * (Npara - C_TEMP);
	d_bTemp = d_aTemp + D_TEMP;

	printf("화씨온도 = %.2lf\n섭씨온도 = %.2lf\n절대온도 = %.2lf\n", Npara, d_aTemp, d_bTemp);
}


