//ptr_ops.c 포인터 연산
#include <stdio.h>

int main(void)
{
	int urn[5] = {100, 200, 300, 400, 500};
	int *ptr1, *ptr2, *ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	printf("***************************************\n");
	printf("int urn[5] = {100, 200, 300, 400, 500};\n");
	printf("int *ptr1, *ptr2, *ptr3;\n");
	printf("ptr1 = urn;\nptr2 = &urn[2];\n");
	printf("***************************************\n");
	printf("포인터의 값(ptr1) = %p, 역참조된 포인터가 가리키는 값(*ptr) = %d, 포인터의 주소(&ptr1) = %p\n", ptr1, *ptr1, &ptr1);

	//포인터 + 정수 
	ptr3 = ptr1 + 4;
	printf("포인터에 정수를 더한다: \n");
	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", ptr3, *(ptr1 + 3));

	//포인터 증감(++ , --) 
	ptr1++;
	printf("\nptr1++을 수행한 후의 값:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr2--;
	printf("\nptr2--을 수행한 후의 값:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	//복원
	--ptr1;
	++ptr2;
	printf("\nptr1과 ptr2 원상태 복원:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	//포인터 - 포인터 : 같은 주소를 가리키고 있어야 한다는 점 명심.
	printf("\n포인터에서 포인터를 뺀다:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1); 

	//포인터 - 정수
	printf("\n포인터에서 정수를 뺀다:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

	return 0;
}
