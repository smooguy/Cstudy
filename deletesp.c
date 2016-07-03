//deletesp.c -- 문자열에서 스페이스 모두 지우기.
#include <stdio.h>
#include <string.h>

#define MAX 64

void DelSpace(char *);

int main(void)
{
	char str[MAX] = {0};

	while(fgets(str, MAX, stdin) != NULL && str[0] != '\n')
	{
		DelSpace(str);
		fputs(str, stdout);
	}

	return 0;
}

//이 함수 만드는게 이렇게 어려운 줄 몰랐다. 
//결국 임시 저장소(배열)을 만들고 해결을 본다.찝찝하지만...

void DelSpace(char *str)
{
	char tmp[256] = {0};

	int i, j, m;

	m = strlen(str);

	for(i = 0, j = 0; i < m; i++, j++)
	{
		while(str[i] == ' ')
			i++;   	
		tmp[j] = str[i];
	}
	strcpy(str, tmp);
}
