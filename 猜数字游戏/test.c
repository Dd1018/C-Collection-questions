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
		printf("������һ�����֣�\n");
		int guess;
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else if(guess==ret)
		{
			printf("�¶��ˣ����������:%d\n", guess);
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
			printf("�����������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺\n");
		}
	} while (input);
	return 0;
}
