#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    n=m+1;
while(zhi(n))
{
    n++;
}
printf("%d",n);
}
int zhi(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return 1;
    }
    return 0;
}