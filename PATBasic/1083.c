#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int arr;
	int arr2[10001] = {0};
	int N;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&arr);
		arr2[abs(i+1 - arr)]++;
	}
	for (int i=N;i>=0;i--)
	{
		if (arr2[i] > 1)
		{
			printf("%d %d\n", i, arr2[i]);
		}
	}
	return 0;
}
