#include<stdio.h>

int a[100010]={};
int main()
{
    int n,k,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);
    i=100009;
    while(a[i]==0)i--;
    while(k!=1||a[i]==0)
    {
        if(a[i]==0)i--;
        else {
                i--;
                k--;
             }
    }
    printf("%d %d",i,a[i]);
    return 0;
}