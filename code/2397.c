#include<stdio.h>
long long int j(int);
int main()
{
    long long int m,n;
    scanf("%lld%lld",&m,&n);
    if(n!=0)
    {
        int x;
        x=j(m)/j(m-n)/j(n);
        printf("%d",x);
        return 0;
    }
    else
        printf("0");
}
long long int j(int n)
{
    long long int x=1,i;
    for(i=n;i>1;i--)
        x*=i;
    return x;
}