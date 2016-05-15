//overflow.c 정수 오버플로우, 부동소수점 언더플로우, 오버플로우
//
#include <stdio.h>
#include <limits.h> //정수 자료형들의 최대, 최소 심볼릭 상수가 있다.
#include <float.h> //부동 소수점들의 최대, 최소 심볼릭 상수가 있다.

int main(void)
{
	
	puts("====== int overflow =======");
	printf("Max int = %d\t Max int + 1 = %d\t Max int + 2 = %d\n", INT_MAX, INT_MAX + 1, INT_MAX + 2); 
	//최대수를 넘어가면 마이너스가 된다.

	puts("====== float overflow ======");
	printf("Max float =  %f\tMax float + 1.0 = %f\n", FLT_MAX, FLT_MAX + 1.0); //부동소수점의 근사값계산으로 인한 오차
	printf("Min float =  %f\tMax float - 1.0 = %f\n", FLT_MIN, FLT_MAX - 1.0);
	//최대 최소를 넘어가도 값에 영향이 없다. 오차만큼의 수를 더하거나 빼야 영향이 생긴다.

	return 0;

}
