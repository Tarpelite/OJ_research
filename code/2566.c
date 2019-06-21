#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100001]={0},x,i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]=a[x]+1;
    }
    scanf("%d",&k);
    for(i=100000;k>1;i--)
    {
        if(a[i]!=0)
            k--;
    }
    for(;a[i]==0;i--)
    {
        
    }
    printf("%d %d",i,a[i]);
    return 0;
}