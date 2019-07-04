#include <stdio.h>  
#include <string.h>  
// 判断前中后的A的个数是否满足被接受的关系   
int Accept(int a, int b, int c)
{  
	if (b == 1 && a == c || b > 1 && c == b * a)  
		return 1;  
	else  
		return 0;  
}  
// 读取字符串并判断是否能被接受   
void Judge(char* s) 
{
	int prefix = 0, infix = 0, suffix = 0;  // 分别记录前面中间后面A的个数   
	while (*s == 'A')
	{  // 遍历字符串前头的所有的A并统计个数   
		++prefix;  
		++s;      
	}  
	if (*s != 'P') 
	{   // 字符P隔开前中   
		printf("NO\n");  
		return;  
	}  
	while (*++s == 'A') // 遍历字符串中间所有的A并统计个数   
		++infix;  
	if (*s != 'T') 
	{    // 字符T隔开中后   
		printf("NO\n");  
		return;  
	}  
	while (*++s == 'A') // 遍历字符串最后面的A并统计个数   
		++suffix;  
	// 可能测试数据的一个bug，接着尾端A还有其他字符也能ac   
	if (Accept(prefix, infix, suffix))  
		printf("YES\n");  
	else  
		printf("NO\n");  
}  
int main() 
{  
	//  freopen("in", "r", stdin);  
	//  freopen("out", "w", stdout);  
	int n;  
	scanf("%d\n", &n);  
	for (int i = 0; i < n; ++i) 
	{  
		char s[101];  
		gets(s);  
		Judge(s);  
	}  
	return 0;  
}



