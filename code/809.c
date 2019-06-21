#include <stdio.h>
int a[100001];
int main()
{
    int n, k, m, i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        a[m]+=1;
    }
    scanf("%d",&k);
    for(i=100001;k>1;i--)
        if(a[i]!=0)
        k--;
    printf("%d %d",i,a[i]);
    return 0;
}