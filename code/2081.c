#include<stdio.h>
int x(int n)
{
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<200000;i++)
    {
        if(x(i)==1)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}