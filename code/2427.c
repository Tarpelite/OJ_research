#include<stdio.h>
int prime(int n)
{
    int j;
    for(j=2; j<n && n%j!=0; j++);
    if(j==n)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i;

    scanf("%d",&n);

    for(i=n+1; i<=200000; i++)
    {
        if(prime(i)==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}