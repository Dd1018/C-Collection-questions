#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int left = a[0];
	int sz = sizeof(a) / sizeof(a[0]);
	int right = a[sz - 1];
	int k = 12;
	int mid;
	while (left<=right)
	{
		 mid = (right + left) / 2;
		if (k < mid)
		{
			right = right - 1;
		}
		else if (k > mid)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d", mid - 1);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;
}