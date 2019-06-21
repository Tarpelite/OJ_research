#include<stdio.h>
int combin(int,int);
int main()
{
    int m,n,k;
    scanf("%d%d",&m,&n);
    k=combin(m,n);
    printf("%d\n",k);
    return 0;
}
int combin(int m,int n)
{
    if(m<n||m==0||n==0)
        return 0;
    if(n==1)
        return m;
    if(n==m)
        return 1;
    return combin(m-1,n)+combin(m-1,n-1);
}