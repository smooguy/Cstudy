// height.c -- 키를 입력받아 다른 단위로 출력.
//
#include <stdio.h>

#define INCH 2.54 // 1inch = 2.54cm
#define FOOT 12	// 1foot = 12inches

int main(void)
{
	float i_InputCm;

	printf("Input your height Cm :");
	scanf("%f", &i_InputCm);
	getchar();
	float tmp, tmp3;
	int tmp2;
	while(i_InputCm > 0)
	{
		tmp = i_InputCm / INCH;
		tmp2 = tmp / FOOT; 	//형변환을 유도하려 한다면 이런식으로 lvalue를 사용해서 변환을 시킨 후 출력을 한다.
		tmp3 = (int)tmp % FOOT;
		printf("%.1fCm is %dfeet, %.1finches\n", i_InputCm, tmp2, tmp3); //형변환이 일어나는 표현식을 인자로 쓰지 말자. 개판난다.
		printf("Input your height Cm ( Exit <= 0):");
		scanf("%f", &i_InputCm);
	}
	puts("Good bye!");
	return 0;
}

