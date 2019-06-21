#include<stdio.h>
int main()
{
    int a[100001];
    int i,n,x,k,l=0;
    for(i=0;i<=100001;i++)
        a[i]=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        a[x]++;
    }
    scanf("%d",&k);
    for(i=100001;i>=0;i--)
    {
        if(a[i]!=0)
        {
            l++;
        }
        if(l==k)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
}