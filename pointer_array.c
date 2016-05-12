#include <stdio.h>

void main(void)
{
	//char szName[16] = {"Test"};
	char szName[16];
	char *pszName = NULL;
	const int nData = 10;

	pszName = szName; //szName(주소 상수)를 pszName라는 주소담는 그릇에 넣었다.

	pszName = "Test"; //"Test"라는 문자열의 주소를 pszName에 다시 넣었다. 고로 원래 있던 szName의 주소는 사라졌다.
	
	//pszName = 'A';
	//pszName = 0x1;
	//szName = "Test"; //이런식으로는 불가하다. 주소를 주소에 넣는다. 3 = 4 와 비슷한 상황. 포인터는 주소를 담는 그릇이고 배열이름은 주소 그 자체를 의미한다. 배열 이름을 주소를 담는 그릇으로 착각해서는 안된다.

	sprintf(szName, "%s", "Test"); //문자열을 넣을때는 이런식으로 해준다. 

	puts(pszName);

	printf("pszName = %p, %s\n", pszName, pszName);
	printf("szName = %p, %s\n", szName, szName);
    
} 
