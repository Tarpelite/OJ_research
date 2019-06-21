#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int n;
int solve(int n)
{
    int j=2,ok=1;
    while(j*j<=n)
    {
        if(n%j==0)
        {
            ok=0;
            break;
        }
        j++;
    }
    return ok;

}

int main()
{
    scanf("%d",&n);
   while(1)
    {
        if(solve(++n))
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
}