#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int fun(char* b)
{
	int i = 0;
		i=strlen(b);
		return i+1;
}
int main()
{
	char a[] = "abcde";
	printf("%d", fun(a));
	return 0;
}