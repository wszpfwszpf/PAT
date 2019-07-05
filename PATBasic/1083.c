#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int arr[10000] = {0};
	int arr2[10001] = {0};
	int N;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
		arr2[abs(i+1 - arr[i])]++;
	}
	for (int i=10000;i>=0;i--)
	{
		if (arr2[i] > 1)
		{
			printf("%d %d\n", i, arr2[i]);
		}
	}
	return 0;
}
