#include <stdio.h>
#include <math.h>
#include <string.h>
//Copyright WZX 2019

int isprime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {if(a%i==0) {return 0;break;}}
    return 1;
}

int main()
{
    int now,next;
    scanf("%d",&now);
    for(next=now+1;;next++)
    {
        if(isprime(next))
        {
            printf("%d",next);
            break;
        }
    }

    /*for(int j=1;j<=10000;j++)
    {
        if(isprime(j))
            printf("%d\n",j);
    }*/

  return 0;
}