#include <stdio.h>
#include <math.h>
int ifPrime(int s);

int main()
{
    int i,s,p;
    scanf("%d",&s);
    for(i = s+1;i<100003;i++)
    {
        if(ifPrime(i))
            break;
    }
    printf("%d",i);
}
int ifPrime(int s)
{
    int i,k;
    k = sqrt(s);
    for(i = 2;i<=k;i++)
        if(s%i == 0) break;
        if(i<=k)
            return 0;
        else
            return 1;
}