int a[10000000]={};
#include<stdio.h>

int main()
{
    int n,i,b,c=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&k);
    for(i=10000001;i>=1;i--)
    {
        if(a[i]!=0)
        {
            c++;
            if(c==k)
                break;
        }
    }
    printf("%d %d",i,a[i]);
    return 0;
}