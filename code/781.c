#include<stdio.h>
int x[100010];
int main()
{
    int n,k,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&k);
    x[k]++;
    }
    scanf("%d",&k);
    int cnt=0;
    for(i=100000;i>=1;i--)
    if(x[i])
    {
    cnt++;
    if(cnt==k)
{
    printf("%d %d",i,x[i]);
    break;    }
    }
    return 0;
}