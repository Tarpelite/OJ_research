#include <stdio.h>
int is_prime(int n)
{
    int i;
    if(n==1)
        return 0;
    for(i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n, m, i;
    scanf("%d",&n);
    for(i=1;; i++)
    {
        if(is_prime(n+i))
        {
            printf("%d\n",n+i);
            break;
        }
    }
    return 0;
}