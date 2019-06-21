#include<stdio.h>
#include<math.h>
int isprime(int a)
{
    int i;
    if(a==1)
        return 0;
    for(i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return 0;
        return 1;
}
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=m+1;;i++)
    {
        if(isprime(i))
        {
        printf("%d\n",i);
        break;
        }
    }
    return 0;
}