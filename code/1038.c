#include<stdio.h>

int a[100000];
int main()
{
    int n,i=0,d,k,y,u,m;
    scanf("%d",&n);
    for(int p=0;p<n;p++ )
    {
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);
    for(i=100000;i>=0;i--)
    {
        if(a[i]>0)
        {
            k--;
        }
        if(k==0)
        {
            break;
        }
    }
    printf("%d %d",i,a[i]);
    return 0;
}