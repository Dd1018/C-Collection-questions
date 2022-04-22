#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char fun(char *b)
{
	if (*b == '\0')
	{
		return;
	}
	else
	 fun(b+1);
	printf("%c ", *b);
}
int main()
{
	char a[] = "abcdef";
	fun(a);
	return 0;
}