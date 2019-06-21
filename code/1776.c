#include<stdio.h>
int main()
{
    int a[100001]={0},i,n,k,j=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]+=1;
    }
    scanf("%d",&k);
    for(i=100000;i>0;i--)
    {
        if(a[i]!=0)
        {
            j+=1;
        }
        if(j==k)
        break;

    }
    printf("%d %d",i,a[i]);
}