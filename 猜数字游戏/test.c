#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("******1.play*************\n");
	printf("******0.exit*************\n");
	printf("*************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入一个数字：\n");
		int guess;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess==ret)
		{
			printf("猜对了，这个数字是:%d\n", guess);
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入猜数字游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
		}
	} while (input);
	return 0;
}
