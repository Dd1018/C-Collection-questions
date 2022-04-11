#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>          //É¸Ñ¡·¨
int main()
{
    int a;
    scanf("%d", &a);
    int b[100];
    int i, j;
    int k = 0;
    for (i = 0; i <= a; i++)
    {
        b[i] = i;
    }
    for (i = 2; i <= a; i++)
    {
        for (j = i + 1; j <= a; j++)
        {
            if (b[j] % i == 0)
            {
                b[j] = 0;
            }
        }
    }
    for (i = 2; i <= a; i++)
    {
        if (b[i] != 0)
        {
            printf("%d ", b[i]);
        }
        else
            k++;
   }
    printf("\n%d", k);
    return 0;
}