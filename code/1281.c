#include<stdio.h>
int main()
{
    int m,n,i,S=1,K=1;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
        S*=m-i;
    for(i=n;i>0;i--)
        K*=i;
    printf("%d",S/K);
    return 0;
}