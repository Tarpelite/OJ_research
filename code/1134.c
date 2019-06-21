#include<stdio.h>

#define N 1000005
int a[N];

int main()
{
    int i,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&i);
        a[i]++;
    }
    int m;
    scanf("%d",&m);
    for(int i=N-1;i>=0;i--)
    {
        m-=(a[i]>0);
        if(m<=0)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
    return 0;
}