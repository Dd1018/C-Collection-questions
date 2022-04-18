#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char a[1000];
    int i = 0, j = 0,t=0,k=0;
    scanf("%s", a);
    for (j = 0; j < 3000;j++ )
    {
        t++;
        if (a[j] == '\0')
            break;
    }
    t = t - 1;
    for (j = 0; j < t; j++)
    {
        printf("%c", a[j]);
        i++;
        if (i == 3 && j != t - 1&&t%3==0)
        {
            printf(",");
            i = 0;
        }
        if (t%3==1&&i==1&&t>3)
        {
            printf(",");
         }
        if (t % 3 == 1 && i != 1&&t>3)
        {
            k++;
            if (k % 3 == 0&&j!=t-1)
                printf(",");
        }
        if (t % 3 == 2 && i==2&&t>3)
        {
            printf(",");
        }
        if (t%3==2 && i != 1&&i!=2&&t>3)
        {
            k++;
            if (k % 3 == 0 && j != t - 1)
                printf(",");
        }
  }
    return 0;
}