#include<stdio.h>
int main()
{
    int a[100001]={0}, n, t, k;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        a[t]++;
    }
    scanf("%d",&k);
    for(i=100000,j=0;j!=k;i--)
    {
        if(a[i]!=0)
            j++;
    }
    printf("%d %d",i+1,a[i+1]);
    return 0;
}