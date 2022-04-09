#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int d = 3 * a;
    int i, j;
    int t = 1;
    int z = 0;
    int l = 0;
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < d - i - 1; j++)
        {
            printf(" ");
        }
        if (t > 3 && t % 3 == 1 && t != d)
        {
            z = t / 3;
            printf("*");
            for (j = z; j != 0; j--)
            {
                printf("     *");
            }
        }
        if (t > 3 && t % 3 == 2 && t != d)
        {
            z = t / 3;
            printf("*");
            for (j = z; j != 0; j--)
            {
                printf(" *   *");
            }
            printf(" *");
        }
        for (j = 0; j <= i; j++)
        {
            if ((t > 3 && t % 3 == 1) || (t > 3 && t % 3 == 2));
            else
                printf("* ");
        }
        t++;
        printf("\n");
        l++;
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < l - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}