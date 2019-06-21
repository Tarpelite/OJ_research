#include <stdio.h>
int main()
{
    int a,b,c,i=0,m=1,n=1;
    scanf("%d %d",&a,&b);
    while(i<b)
    {
        m=m*a;
        a=a-1;
        i++;
    }

    while(b!=1)
    {
        n=n*b;
        b=b-1;
    }
    printf("%d\n",m/n);
    return 0;
}