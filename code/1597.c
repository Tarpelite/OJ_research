#include<stdio.h>
int C(int m,int n)
{
    if(n>m/2)
        return C(m,m-n);
    if(n==0)
        return 1;
    if(n==1)
        return m;
    return C(m-1,n)+C(m-1,n-1);
}
int main()
{
    int m,n,s;
    scanf("%d%d",&m,&n);
    s=C(m,n);
    printf("%d",s);
    return 0;
}