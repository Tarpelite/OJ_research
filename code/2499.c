#include<stdio.h>
int a[100005], b[100005];
int main()
{
    int n,m,i,k=1,g;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%d",&m);
    a[m]++;
    }

    scanf("%d",&g);

    for(i=0;i<100005;i++)
    {
    if(a[i]!=0)
    b[k++]=i;
    }

    printf("%d %d",b[k-g],a[b[k-g]]);
    return 0;

}