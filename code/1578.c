#include <stdio.h>

int main()
{
    int m,n,i,j,k;
    long long int a,b,c,d;
    scanf("%d%d",&m,&n);
    a=1;
    b=1;
    c=1;
    for(i=m;i>0;i--){
        a=a*i;
    }
    for(j=n;j>0;j--){
        b=b*j;
    }
    for(k=m-n;k>0;k--){
        c=c*k;
    }
    d=a/(b*c);
    printf("%d",d);
    return 0;
}