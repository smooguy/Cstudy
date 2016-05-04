#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t t = 0, t10 = 0, t100 = 0;

	t = time(NULL);
	t10 = time(NULL) + 864000;
	t100 = time(NULL) + 8640000;


	printf("%s", ctime(&t));
	printf("%s", ctime(&t10));
	printf("%s", ctime(&t100));

}
