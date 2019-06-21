#include<stdio.h>
#define MAXN 10000010
int a[MAXN]={0};

int main()
{
    int i,x,total=0,k=0,n;
    int K;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x]++;
    }
    scanf("%d",&K);
    for(i=MAXN;;i--)
    {
        if(a[i]!=0)
        {
            k++;
        }
        if(k==K)
        {
            break;
        }
    }
    printf("%d %d",i,a[i]);

    return 0;
}