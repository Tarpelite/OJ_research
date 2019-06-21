#include<stdio.h>
int b[10000000]={0}, c[10000000]={0};
int a[100000]={0};
int main()
{

    int n, i, k, x, num;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &b[i]);
        a[b[i]]++;
    }
    scanf("%d", &x);

    for(i=99999,k=0;i>=0;i--)
    {
    if(a[i]!=0)
    {
        c[k]=i;
        b[k]=a[i];
        k++;
    }
    }
    printf("%d %d", c[x-1], b[x-1]);
    return 0;
}