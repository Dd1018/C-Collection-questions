#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun(int x, int y)
{
	if (y <= 0)
		return 1;
	else
		return x * fun(x,y-1);
}
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d",fun(a, b));
	return 0;
}