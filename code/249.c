#include <stdio.h>
int main()
{
    int m, n, i, c, k, l=1;
    scanf("%d %d",&m,&n);
    if(n==0)
        printf("%d",l);
    else if(n==1)
        printf("%d",m);
    else
    {
            for(i=2,c=m,k=1;i<=n;i++)
    {
        m-=1;
        c=c*m;
        k=k*i;
    }
    printf("%d",c/k);
    }
    return 0;
}