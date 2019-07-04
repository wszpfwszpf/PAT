#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	char AAA[1000010];
	char BBB[1000010];
	gets(AAA);
	gets(BBB);
	int ascll[128] = {0};
	for(int i=0;i<strlen(AAA);i++)
	{
		if (ascll[AAA[i]] == 0)
		{
			printf("%c",AAA[i]);
			ascll[AAA[i]] = 1;
		}
		
	}
	for(int i=0;i<strlen(BBB);i++)
	{
		if (ascll[BBB[i]] == 0)
		{
			printf("%c",BBB[i]);
			ascll[BBB[i]] = 1;
		}
	}
	
	return 0;
}
