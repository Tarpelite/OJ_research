#include<stdio.h>
int cmn(int,int);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",cmn(m,n));
    return 0;
}
int cmn(int m,int n)
{
    if(m<n||m<1||n<1)
        return 0;
    if(n==1)
        return m;
    if(n==m)
        return 1;
    else
        return cmn(m-1,n)+cmn(m-1,n-1);
}