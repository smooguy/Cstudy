#include <stdio.h>

void main(void)
{
	int nInput = 0, nIndex = 0;
INDEX:
	printf("[1] Inch --> Cm\t\t[2] Cm --> Inch\n:");
	scanf("%d", &nIndex);

	if(nIndex == 1)
	{
		puts("Inuput Number:");
		scanf("%d", &nInput);
		printf("%dinch is %.3fcm.\n", nInput, nInput * 2.54);
	}
	else if(nIndex == 2)
	{
		puts("Inuput Number:");
		scanf("%d", &nInput);
		printf("%dcm is %.3finch.\n", nInput, nInput / 2.54);
	}
	else
	{
		puts("Reinput Index\n");
		goto INDEX;
	}
}
