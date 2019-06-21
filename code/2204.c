#include<stdio.h>
#include<math.h>
int isprime(int a)
{
    for(int i = 2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            return 0;
            break;
        }

    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(n =n+1;;n++)
    {
        if(isprime(n)){
            printf("%d",n);
        break;}
    }




    return 0;
}