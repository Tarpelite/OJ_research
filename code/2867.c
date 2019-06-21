#include<stdio.h>
long long multi(int n)
{
    long long result=1;
    int i;
    for(i=n;i>0;i--)
    {
        result*=i;
    }
    return result;
}
void main()
{
    int n,m,result;
    scanf("%d%d",&m,&n);
    result=multi(m)/(multi(n)*multi(m-n));
    printf("%d",result);
}