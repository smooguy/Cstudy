//myatoi.c -- atoi()를 직접 만들어보자.
//우선 되게 힘들었다. 결국에 구글신의 도움을 받았다.
//그냥 단순히 생각해서는 변환되지 않는다.
//ASCII를 잘 이해하고 있어야 한다.
//ascii는 일반숫자로 문자를 구현하기 위하여 만들어진 규칙이다.
//그 이유는 컴퓨터는 오직 1과 0의 숫자만 알기때문이다.
//이래서 만들어진 ascii코드는 총 128까지의 숫자로 만들어졌다.(보통 char형은 1바이트 0~127까지의 숫자를 담는다.)
//자 그럼 ascii에 따라 숫자 0을 문자화하고자 하니 + 38(16진수로는 0x30)해주면 된다.
//이말은 다시 문자 0을 숫자 0으로 바꾸려면 0x30을 빼면 된다는 것이다.
//명심할 것은 컴퓨터 메모리에는 문자 0이라고 하는 것이 38의 이진수형이 저장되어 있다는 점이다.
//이 이진수 숫자들을 문자형으로 읽어들이면(%c같은) '0'인 것이고 그냥 숫자화하면 십진수 38이란 점이다.
//어쨌든 문자 0은 다시 38을 빼면 숫자(0000000000으로만 저장된)이 된다. num = '0' - 38;
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 64

int Myatoi(char *str);

int main(void)
{
	char str[SIZE];	

	while(fgets(str, SIZE, stdin) != NULL && str[0] != '\n')
		printf("%d\n", Myatoi(str));

	return 0;
}

int Myatoi(char *str)
{
	int i;
	int num = 0;
	int lim;

	lim = strlen(str);

	for(i = 0; i < lim - 1; i++)
	{
		if(isdigit(str[i]))
		{
			num = num * 10;    //10을 곱하는 이유는 자릿수를 열기위함이다. 
			num = num + (str[i] - 0x30);
			continue;
		}
		else
			return 0;
	}
	return num;
}
