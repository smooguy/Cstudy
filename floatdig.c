//floatdig.c -- double 형과 float형의 자릿수

#include <stdio.h>
#include <float.h>

int main(void)
{
	double d_Number = 1.0 / 3.0;
	float f_Number = 1.0 / 3.0;

	printf("double = %.4f, float = %.4f\n", d_Number, f_Number);
	printf("double = %.12f, float = %.12f\n", d_Number, f_Number);
	printf("double = %.16f, float = %.16f\n", d_Number, f_Number);
	printf("double = %d, float = %d\n", DBL_DIG, FLT_DIG);

	return 0;
}
