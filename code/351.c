#include <stdio.h>

int n;

int zhishu(int k);

int main()
{
    int a;
    int i, j;
    scanf("%d", &a);
    i=a+1;
    while(zhishu(i)==0)
    {
        i++;
    }
    printf("%d", n);
    return 0;
}

int zhishu(int k)
{
    int b,t;
    b=0;
    for(t=2;t<k;t++)
    {
        if(k%t==0)
            b++;
    }
    if(b==0)
    {
        n=k;
        return 1;}
    else
        return 0;
}