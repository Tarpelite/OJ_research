#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100000]={0};
    int i,m,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);
    int b[100000],c[100000],j=0;
    for(i=0;i<100000;i++)
    {
        if(a[i]!=0)
        {
            b[j]=i;
            c[j]=a[i];
            j++;
        }
    }
    printf("%d %d",b[j-k],c[j-k]);
    return 0;
}