//sortstr.c -- 문자열들을 다양하게 정렬한다.
#include <stdio.h>
#include <string.h>

#define MAX 128

void InputString(char str[][MAX]);
int InputMenu(void);
void SortStr(char *str[], int index);
int FirstWordLen(char *pstr);

int main(void)
{
	int index, i, j;

	//이 배열은 원본이다. 입력된 그대로 보존된다.
	char str[10][MAX] = {0};

	//이 배열은 위 원본 문자열들의 주소만을 가져와 복사시킨다.
	//위의 원본은 놔두고 오로지 이 배열만으로 문자열들을 다양하게 정렬할 것이다.
	char *pstr[10];

	puts("문자열 10개를 입력해주세요.");
	puts("중간에 힘드시면 Ctrl + D를 눌러 그만 입력하셔도 되요.");
	InputString(str);

	//원본 문자열 배열의 주소들을 포인터로 복사한다.
	for(i = 0; i < 10; i++)
		pstr[i] = str[i];
	
	while(index = InputMenu())
	{
		switch(index)
		{
			case 1:
				for(i = 0; i < 10; i++)
					fputs(str[i], stdout);
				break;
			case 2:
				SortStr(pstr, 2);
				break;
			case 3:
				SortStr(pstr, 3);
				break;
			case 4:
				SortStr(pstr, 4);
				break;
			case 5:
				puts("Good bye!");
				return 0;
		}
	}
}
	

void InputString(char str[][MAX])
{
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d: ", i + 1);
		for(j = 0; j < MAX; j++)
		{
			str[i][j] = getchar();
			if(str[i][j] == EOF)
				return;
			else if(str[i][j] == '\n') 
				//문자열 끝에 굳이 \0을 넣어주지 않아도 된다. 
				//왜냐하면 배열을 선언할때 0으로 전부 초기화를 했기 때문이다.
				break;
		}
	}
}

int InputMenu(void)
{
	int index;

	printf("-----------------------------------------------------------\n");
	printf("[1] 원복리스트 출력           [2] ASCII 조회 순서로 출력\n");
	printf("[3] 문자열 길이 순서로 출력   [4] 첫단어의 길이 순서로 출력\n");
	printf("[5] 종료\n");
	printf("-----------------------------------------------------------\n");
	printf("원하는 출력 방식을 선택하세요: ");
JUMP:
	while(scanf("%d", &index))
	{
		if(index < 1 || index > 5)
		{
			printf("메뉴숫자는 1-5까지 입니다. 다시입력해주세요: ");
			continue;
		}
		else
			return index;
	}
	printf("문자나 문자열이 아닌 숫자를 입력해주세요: ");
	while(getchar() != '\n')
		continue;
	goto JUMP;
}

void SortStr(char *pstr[], int index)
{
	char *tmp;
	int i,j;

	switch(index)
	{
		case 2:
			for(i = 0; i < 9; i++)
			{
				for(j = i+1; j < 10; j++)
				{
					if(strcmp(pstr[i], pstr[j]) > 0)
					{
						tmp = pstr[i];
						pstr[i] = pstr[j];
						pstr[j] = tmp;
					}
				}
			}
			for(i = 0; i < 10; i++)
				fputs(pstr[i], stdout);
			break;
		case 3:
			for(i = 0; i < 9; i++)
			{
				for(j = i+1; j < 10; j++)
				{
					if(strlen(pstr[i]) > strlen(pstr[j]))
					{
						tmp = pstr[i];
						pstr[i] = pstr[j];
						pstr[j] = tmp;
					}
				}
			}
			for(i = 0; i < 10; i++)
				fputs(pstr[i], stdout);
			break;
		case 4:
			for(i = 0; i < 9; i++)
			{
				for(j = i+1; j < 10; j++)
				{
					//if(strchr(pstr[i], ' ') - pstr[i] > strchr(pstr[j], ' ') - pstr[j])
					if(FirstWordLen(pstr[i]) > FirstWordLen(pstr[j]))
					{
						tmp = pstr[i];
						pstr[i] = pstr[j];
						pstr[j] = tmp;
					}
				}
			}
			for(i = 0; i < 10; i++)
				fputs(pstr[i], stdout);
			break;
	}
}

int FirstWordLen(char *pstr)
{

	if(strchr(pstr, ' '))
		return strchr(pstr, ' ') - pstr;
	else if(strchr(pstr, '\n'))
		return strchr(pstr, '\n') - pstr;
	else if(strchr(pstr, '\0'))
		return strchr(pstr, '\0')- pstr;
	else 
		return 0;
}
