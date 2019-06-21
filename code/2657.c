#include<stdio.h>
int main()
{
    int n,a[100000]={0},b,k,i,j,q,z=0;
    scanf("%d",&n);
    for(q=0;q<n;q++)
    {
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&k);
    for(j=100000;z<=k;j--)
    {
        if(a[j]!=0)
            z++;
        while(z==k+1)
        {
            printf("%d %d",j,a[j]);
            break;
        }
    }
}