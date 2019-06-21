#include<stdio.h>
int main()
{
    int m,n,i,a,b,c,d;
    scanf("%d %d",&m,&n);
    a=1,c=1;
    for(i=1,b=m;i<n+1;i++){
        a=a*b;
        b--;
    }
    for(i=1;i<n+1;i++){
        c=c*i;
    }
    d=a/c;
    printf("%d",d);
    return 0;
}