#include <stdio.h>
#include <string.h>

void main(void)
{
	//char *asList[5] = {"I am programmer!", "C Language Study", "Hello, World", "I love you","Park Min Woong"};
	char *asList[5] = {"df", "cf", "af", "bf", "ef"};
	char *pasList = NULL;
	int i;

	for(i = 0; i < 4; ++i)
	{
		if(strcmp(asList[i], asList[i+1]) > 0);
		else
		{
			pasList = asList[i+1];
			asList[i+1] = asList[i];
			asList[i] = pasList;
			for(i += 1; i > 0; --i)	
			{
				if(strcmp(asList[i-1], asList[i]) > 0);
				else
				{
					pasList = asList[i];
					asList[i] = asList[i-1];
					asList[i-1] = pasList;
				}
			}
		}
	} 

	for(i = 0; i < 5; ++i)
		printf("%s\n", asList[i]);

}
