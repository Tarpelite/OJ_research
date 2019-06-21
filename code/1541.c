#include<stdio.h>
#define N 100002
int main()
{
    int a[N]={},n,c,k,count,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&c);
        a[c]++;
    }
    scanf("%d",&k);
    for(i=100000,count=0;;i--)
    {
        if(a[i]!=0)
            count++;
        if(count==k)
            break;
    }
    printf("%d %d",i,a[i]);
    return 0;
}