#include<stdio.h>
int A(int n,int m)
{
    int _result=1,i;
    for(i=m;i>m-n;i--)
    {
        _result*=i;
    }
    return _result;
}
int factorial(int n)
{
    int _result=1,i;
    for(i=2;i<=n;i++)
    {
        _result*=i;
    }
    return _result;
}

int main()
{
    int m,n,result;
    scanf("%d%d",&m,&n);
    result=A(n,m)/factorial(n);
    printf("%d",result);

    return 0;
}