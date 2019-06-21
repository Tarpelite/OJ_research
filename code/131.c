#include<stdio.h>
int is_zs(int t)
{
    int i;
    for(i = 2; i*i<= t; i++)
        if(t%i == 0)
            return 0;
    return 1;
}

int main(void)
{
    int n;
    int t;
    int i,j;
    scanf("%d",&n);
    for(i = 0,j = 1; i < 1; j++)
    {
        t = n+j;
        if(is_zs(t))
        {
            printf("%d",t);
            i++;
        }
    }
    return 0;
}