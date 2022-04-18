#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char a[1000];
 int i = 0, j = 0,z=0;
 while (scanf("%c", &a[z++]) != EOF)
 {
     if (a[z-1] == '\n')
         break;
 }
        for (i = 0; a[i] != '\n'; i++)
        {
            if (i == 0)
            {
                if (a[i] >= 'a' && a[i] <= 'z')
                    printf("%c", a[i]-32);
                else
                    printf("%c", a[i]);
            }
            if (a[i] == 32)
            {
                if (a[i+1] >= 'a' && a[i+1] <= 'z')
                    printf("%c", a[i+1] - 32);
                else
                    printf("%c", a[i+1]);
            }
        }
    return 0;
}