#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>                      
int main()
{
	int a;
	scanf("%d", &a);
	int i, j;
	int k = 0;
	for (i = 2; i <= a; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				k++;
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	printf("\n%d", k);
	return 0;
}