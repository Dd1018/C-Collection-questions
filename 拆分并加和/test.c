#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun(int x)
{
	if (x > 9)
	{
		return fun(x / 10) + x % 10;
	}
	else
		return x;
}
int main()
{
	int a = 1729;
	printf("%d",fun(a));
	return 0;
}