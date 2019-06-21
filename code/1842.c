#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int b[100005]={0},k,i,j,t;

    while(n--)
    {
        int a;
        scanf("%d",&a);
        b[a]++;
    }
    scanf("%d",&k);
    for(i=100004;i>=0;i--)
    {
        k-=(b[i]>0);
        if(k<=0)
        {
            printf("%d %d",i,b[i]);
            return 0;
        }
    }

    return 0;
}