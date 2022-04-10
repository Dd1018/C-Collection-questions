#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, c, i, j;
    int b[50];
    int d[50];
    int x = 0;
    int t = 0;
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    scanf("%d", &c);
    for (i = 0, j = 0; i < a; i++, j++)
    {
        if (b[i] ==c)
        {
            while (b[i] == c)
            {
                d[j] = b[i + 1];
                i++;
            }

        }
        else if (i == a - 1 && c == b[i])
        {
            d[j] = c;
        }
        else
        {
            d[j] = b[i];
        }
    }
    for (i = 0; i < a; i++)
    {
        if (b[i] == c)
            ;
        else
            t++;
    }
    for (i = 0; i<t; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}