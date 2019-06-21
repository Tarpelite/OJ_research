#include <stdio.h>
#include <stdlib.h>
int a[100010];
int b[1000000];
int main()
{
    int i,n,num,k;
    int m=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }
    scanf("%d",&k);
    for(i=1;i<=100000;i++)
    {
        if(a[i]!=0)
        {
            b[m]=i;
            m++;
        }
    }
    printf("%d %d",b[m-k],a[b[m-k]]);
    return 0;
}