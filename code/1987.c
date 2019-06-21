#include<stdio.h>
long long C(int,int);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",C(m,n));
    return 0;
}
long long C(int m,int n)
{
    if(n>m/2)
        return C(m,m-n);
    if(n==0)
        return 1;
    else if(n==1)
        return m;
    else if(n>1)
        return C(m-1,n-1)+C(m-1,n);
}