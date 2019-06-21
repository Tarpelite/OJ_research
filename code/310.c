#include<stdio.h>
int main()
{
    int a[100001]={0},n,i=0,x,k;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
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
    for(i;a[i]==0;i--);
    printf("%d %d",i,a[i]);
    return 0;
}