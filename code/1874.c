#include<stdio.h>
int main()
{
    int m,n,a,c;
    scanf("%d",&n);
    for(m=n+1; m<=100003; m++)
    {
        for(a=2; a<=m; a++)
        {
            c=m%a;
            if(c==0)
                break;
        }
        if(m==a)
        {
            printf("%d\n",m);
            break;
        }
    }
        if(n==100000)
            printf("%d",m=100003);
    return 0;
}