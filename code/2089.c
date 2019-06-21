#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    int sign=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            sign =0;
            break;
        }
    }
    return sign;
}
int main ()
{
    int n;
    scanf("%d",&n);

    int i;
    for(i=0;i<=n;i++){
        n=n+1;
        while(isprime(n)){
            printf("%d",n);
            i=n+1;
            break;
        }
    }

  return 0;
}