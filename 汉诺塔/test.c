#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void move(char A,char B)
{
	printf("%c-%c ", A, B);           //�ƶ����ӵĺ���
}
void Han(int a,char z,char x,char c)    //a�����ӵĸ��� z����ʵ�����ӣ�x������x����ת�Ƶ����� c��Ŀ������
{
	if (a == 1)
	{
		move(z, c);
	}
	else
	{
		Han(a - 1, z, c, x);     //������Ӹ�������1������ͨ�����������Ӱѳ��ײ����һ�����ӵ����������ƶ����ڶ�������
		move(z,c);       // ���Űѵ�һ�����������һ�����ӣ��ƶ���C��
		Han(a - 1, x, z, c);// �ѵڶ��������ϵ����ӣ�ͨ����һ�������ƶ���������������
	}
}
int main()
{
	Han(1, 'A', 'B', 'C');
	return 0;
}