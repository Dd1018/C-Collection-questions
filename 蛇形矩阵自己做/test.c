#define _CRT_SECURE_NO_WARNINGS
int b[10000][10000] = { 0 };
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i=0, j=0;
	int t = 1;                       //”““∆
	int z = 1;
	b[i][j] = z;
	for (z = 2; z<= a * a; z++)
	{
		if (i == 0 && t == 1 && j < a - 1)
		{
			b[i][++j] = z;
			t = -1;
		}
		else if (j == 0 && t == -1 && i < a - 1)
		{
			b[++i][j] = z;
			t = 1;
		}
		else if(j == a - 1 && t == 1)
		{
			b[++i][j] = z;
			t = -1;
		}
		else if (i == a - 1 && t == -1)
		{
			b[i][++j] = z;
			t = 1;
		}
		else if (t == -1)
		{
			b[++i][--j] = z;
		}
		else if (t == 1)
		{
			b[--i][++j] = z;
		}
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}