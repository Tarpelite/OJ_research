#include<stdio.h>
int is_prime(int);

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<100100;i++)
        if(is_prime(i)==1)
    {
            printf("%d",i);
            break;
    }
    return 0;
}
int is_prime(int n)
{
    int j;
    for (j=n-1;j>0;j--)
    {
        if (n%j==0)
            break;
    }
    if (j==1)
        return 1;
    else
        return 0;
}