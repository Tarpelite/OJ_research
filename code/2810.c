#include<stdio.h>
int m, prime[30000]={2};
int is_prime(int);
void print_prime(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    print_prime(100050);
    for(i=0;i<=m-1;i++)
    {
        if(prime[i]>n)
        {
            printf("%d\n", prime[i]);
            break;
        }

    }

    return 0;
}



void print_prime(int n)
{
    int i;
    m=1;
    for(i=3;i<n;i+=2)
    {
        if(is_prime(i))
        {
            prime[m++]=i;
        }
    }
}

int is_prime(int k)
{
    int i;
    for(i=0;prime[i]*prime[i]<=k;i++)
    {
        if(k%prime[i]==0)
            return 0;
    }
    return 1;
}