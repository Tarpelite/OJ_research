#include<stdio.h>
int n,m,c = 0,k;
int a[10000000];
int main()
{
    scanf("%d",&n);
    for(int i = 1;i <= n;i++)
    {
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);
    for(int i = 100000;i >= 1;i--)
    {
        if(a[i]!=0) c++;
        if(c == k)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
    return 0;
}