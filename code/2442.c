#include<stdio.h>

int judge (int x)
{
    int i, n;
    int Flag = 0;
    i = x + 1;
    while (i)
    {
        Flag = 0;
        for (n = 2;n < i; n++)
        {
            if (i % n == 0)
            {
                Flag += 1;
                break;
            }

        }
        if (Flag == 0)
            {return i;}
        i++;
    }

}

int main()
{
    int m, n, i;
    scanf ("%d", &n);
    if(n == 2)
    {printf ("3");return 0;}

    printf("%d", judge(n));
    return 0;

}