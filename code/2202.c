#include<stdio.h>
int fun(int m,int n)
{
    if(m<n||m==0||n==0)
        return 0;
    if(n==1)
        return m;
    else return fun(m-1,n)+fun(m-1,n-1);

}
int main()
{
    int m,n,sum;
    scanf("%d%d",&m,&n);
    sum=fun(m,n);
    printf("%d",sum);
    return 0;
}