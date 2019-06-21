#include<stdio.h>

int main()
{
    int n, a[100005]={0}, b[100005]={0}, i, c, j=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &c);
        a[c]=c;
        b[c]++;
    }
    scanf("%d",&k);
    for(i=100004;;i--)
    {
        if(a[i]!=0)
        {
            j++;
        }
        if(j==k)
        {
            break;
        }
    }
    printf("%d %d",a[i],b[i]);
    return 0;
}