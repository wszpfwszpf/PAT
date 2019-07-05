#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int lines = 0;
	scanf("%d", &lines);
	getchar();
	int temp = 0;
	while (temp < lines)
	{
		char c;
		int count = 0;
		int count_zimu = 0;
		int count_shuzi = 0;
		int count_point = 0;
		while((c = getchar()) != '\n')
		{
			count++;
			if(isalpha(c))
			{
				count_zimu++;
			}
			else if (isdigit(c))
			{
				count_shuzi++;
			}
			else if (c == '.')
			{
				count_point++;
			}
		}
		temp++;
		if (count < 6)
		{
			printf("Your password is tai duan le.\n");
		}
		else if (count_point + count_shuzi + count_zimu < count)
		{
			printf("Your password is tai luan le.\n");

		}
		else if (count_shuzi == 0)
		{
			printf("Your password needs shu zi.\n");

		}
		else if (count_zimu == 0)
		{
			printf("Your password needs zi mu.\n");

		}
		else
			printf("Your password is wan mei.\n");
		
	}
	return 0;
}
