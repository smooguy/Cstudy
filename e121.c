#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>
#include <ctype.h>

void main(void)
{
	char ch;

	puts("Input a Character:");
	ch = getchar();

	if(isupper(ch) != 0)
		ch = tolower(ch);
	 else
		ch = toupper(ch);

	printf("%c\n", ch);
}

