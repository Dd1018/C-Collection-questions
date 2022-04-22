#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int fun(char*b)
{
	if (*b == '\0')
		return 0;
	else
	return 1 + strlen(b++);
}
int main()
{
	char a[]="abcde";
	printf("%d",fun(a));
	return 0;
}