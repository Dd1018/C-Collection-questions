#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int b[1000];
    int i, j, k;
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
        for (i = 0; i < a; i++)
        {
            for (j = i + 1; j < a; j++)
            {
                if (b[j] == b[i])
                {
                    b[j] = b[j + 1];
                    for (k = j; k < a-1; k++)
                    {
                        b[k] = b[k + 1];
                    }
                    a--;
                    j--;
                }
            }
        }
        for (i = 0; i < a; i++)
        {
            printf("%d ", b[i]);
        }
    return 0;
}