#include<stdio.h>
int main()
{
    long n,m,x=1,y=1,i=0,out;
    scanf("%ld%ld",&m,&n);
    while(i<m-n)
    {
        x*=m-i;
        i++;
    }

    i=1;

    while(i<=m-n)
    {
        y*=i;
        i++;
    }

    out=x/y;

    printf("%ld",out);

    return 0;
}