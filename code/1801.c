#include<stdio.h>
int main()
{
    int m,n,k=1,l=1,q=1,i;
    scanf("%d%d",&m,&n);

    for(i=1;i<=n;i++){
        k=k*m;
        m--;
    }
    for(i=1;i<=n;i++,q++)l=l*q;

    k=k/l;

    printf("%d",k);
    return 0;
}