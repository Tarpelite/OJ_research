#include <stdio.h>

int judge(int a);

int main()
{
    int n, i;
    scanf("%d", &n);
    i = n + 1;
    while(judge(i) != 1)
    {
        i++;
    }
    printf("%d", i);
    return 0;
}
int judge(int a)
{
    int b, j, time = 0;
    for(j = 2; j <= a / 2; j++)
    {
        if(a % j == 0)
            {
                time = 1;
                break;
            }
    }
    if(time == 0)
        b = 1;
    else
        b = 0;

    return b;
}