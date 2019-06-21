#include<stdio.h>

int main()
{
    int i,j,k,n,t;
    int a[100001]={},b[100001]={},c[100001]={};
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&i);
        a[i]++;
    }
    scanf("%d",&k);
    j=1;
    for(i=100000;i>=1;i--)
    {   c[i]=a[i];
        if(a[i]>0)
        {
            b[j]=i;

            j++;
        }
    }

    printf("%d %d",b[k],c[b[k]]);
    return 0;

}