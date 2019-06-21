#include<stdio.h>
int main()
{
    int n,m,i,times=0;
    scanf("%d",&n);
    m=n;
    while(1)
    {
        m=m+1;times=0;
        for(i=m;i>=1;i--)
        {
            if(m%i==0)times=times+1;
            else times=times;
        }
        if(times==2)break;
    }
    printf("%d",m);
    return 0;
}