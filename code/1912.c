#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int m,n;
    scanf("%ld%ld",&m,&n);
    long int t=m-n;
    if(m==0||n==0) printf("0");
    else if(m!=0&&m==n) printf("1");
    else{
    int i;
    for(i=m-1;i>0;i--)
        m*=i;
    for(i=n-1;i>0;i--)
        n*=i;
    for(i=t-1;i>0;i--)
        t*=i;
    int x=m/(n*t);
    printf("%d",x);}
    return 0;
}