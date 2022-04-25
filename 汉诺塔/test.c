#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void move(char A,char B)
{
	printf("%c-%c ", A, B);           //移动盘子的函数
}
void Han(int a,char z,char x,char c)    //a：盘子的个数 z：其实的柱子，x：经过x进行转移的柱子 c：目的柱子
{
	if (a == 1)
	{
		move(z, c);
	}
	else
	{
		Han(a - 1, z, c, x);     //如果盘子个数大于1，则先通过第三个柱子把除底部最后一个盘子的其余盘子移动到第二个柱子
		move(z,c);       // 接着把第一个柱子上最后一个盘子，移动到C，
		Han(a - 1, x, z, c);// 把第二根柱子上的盘子，通过第一个柱子移动到第三跟柱子上
	}
}
int main()
{
	Han(1, 'A', 'B', 'C');
	return 0;
}