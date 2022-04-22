#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int x)
{
	if (x > 9)
	{
		fun(x / 10);
	}
		printf("%d ", x % 10);
}
int main()
{
	int a=123456;
	fun(a);
	return 0;
}
//void print(int n) {
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}