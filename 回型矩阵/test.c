#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int c[100][100];
    int i, j;
    int sum = 0;                                        //1  2  3 4    5
    i = 0;                                             // 16  17 18 19 6
    int q = a;                                         //15   24  25    20  7
    int t = 0;                                          //14  23  22  21  8
    while (sum < a * a)                                 //13 12 11 10  9
    {
        for (j = i; j < q; j++)
        {
            c[i][j] = ++sum;            //第一行
        }
        for (j = i+1; j < q; j++)
        {
            c[j][q-1] = ++sum;
        }                                //右边
        for (j = q - 2; j != -1+t; j--)
        {
            c[q-1][j] = ++sum;               //下面
        }
        for (j =q-2 ; j>=t+1; j--)
        {
            c[j][t] = ++sum;            //左边
        }
        i++;
        q--;
        t++;
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j <a; j++)
        {
            printf("%2d ", c[i][j]);
        }
        printf("\n ");
    }
    return 0;
}

//