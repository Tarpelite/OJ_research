#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&n);
    t=n+1;
    while(1)
    {
        int m;
        for(i=2; i<=t; i++)
        {
            m=t%i;
            if(m==0)
                break;
        }
        if(i==t)
            break;
        t++;
    }
    printf("%d",t);
    return 0;
}