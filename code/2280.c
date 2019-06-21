#include<stdio.h>
int isPrime(int a)
{
    int i,s=0;
    for (i=2;i<a;i++)
    {
        s=s+(a%i!=0);
    }
    if (s==a-2)
        return 1;
    else
        return 0;
}


int main()
{
    int a,b,aa;
    scanf("%d",&a);
    for(aa=a+1;;aa++)
    {
        b=isPrime(aa);
        if (b==1)
        {
            printf("%d",aa);
            break;
        }
    }
    return 0;
}