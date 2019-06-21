#include<stdio.h>
int a[100000];
int main()
{
    int n,b,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&k);
    for(i=100000;i>=0;i--)
    {
        if(a[i]!=0)
            k--;
        if(k==0)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
    return 0;
}