#include<stdio.h>
int a[100005];
int main()
{
    int n,k,i,kmin=100000,kmax=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&k);
        a[k]++;
        if(k<kmin)
            kmin=k;
        if(k>kmax)
            kmax=k;
    }
    scanf("%d",&k);
    for(i=kmax; i>=kmin; i--)
    {
        if(a[i]>0)
            k--;
        if(!k)
            break;
    }
    printf("%d %d\n",i,a[i]);
    return 0;
}