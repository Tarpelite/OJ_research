#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,a[100001],i,t;
    scanf("%d",&n);
    for(i=1;i<100000;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        a[m]+=1;
    }
    scanf("%d",&k);
    for(i=99999;i>0,k>0;i--)
    {
        if(a[i]==0)
        {
            continue;
        }
        t=a[i];
        k-=1;
        a[i]=0;
    }
    printf("%d %d\n",i+1,t);
    return 0;
}