#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    scanf("%d",&n);
    m=n;
    while(1)
    {
        m=m+1;
        k=z(m);
        if(k==1)
            break;
    }
    printf("%d",m);
    return 0;
}

int z(int n)
{
    int i,k;
    for(i=n-1;i>=2;i--)
    {
        k=n%i;
        if(k==0)
            return 0;
    }
    return 1;
}