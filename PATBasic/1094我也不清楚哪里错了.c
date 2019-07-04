#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int isPrime(int n);//判断n是否为素数，如果是则返回1，否则返回0.
int isPrime(int n)//判断n是否为素数，如果是则返回1，否则返回0.
{
	int i;
	for(i = 2; i <= (int)sqrt((double)n); i ++)//从2到算术平方根遍历。
		if(n%i == 0) return 0;//存在约数，不是素数，返回0.
	return 1;//不存在约数，返回1，表示为素数。
}
int convert_num(char num[], int pos_start,int len)
{
	int count = 0;
	for (int i=0;i<len;i++)
	{
		count += (num[pos_start+i]-'0')*(int)pow(10.0,len-1-i);
	}
	return count;
}
int main()
{
	char number[1000];
	int len_tol;
	int len_num;
	scanf("%d%d",&len_tol,&len_num);
	scanf("%s",number);
	for (int i=0;i<len_tol-len_num;i++)
	{
		int temp = convert_num(number,i,len_num);
		if (isPrime(temp))
		{
			printf("%d",temp);
			return 0;
		}
		//printf("   %d\n",temp);
			
	}
	printf("404");
	return 0;
}
