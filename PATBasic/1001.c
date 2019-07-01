#include <stdio.h>
int main()
{
	int number ;
	scanf("%d",&number);
	int times = 0;
	for (;number != 1;)
	{
		if (number%2 == 0)
			number = number/2;
		else if (number%2 == 1)
		{
			number = (3 * number + 1) / 2;
		}
		times++;	
	}
	printf("%d",times);
	return 0;
}
