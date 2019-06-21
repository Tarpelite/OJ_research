#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    n=n+1;
    while(1)
    {
        for(int j=2;j<=n;j++)
        {
            if(n%j==0)
            {
                if(n!=j)
                {
                    n=n+1;
                    j=2;
                }
                else
                {
                    printf("%d",n);
                }
            }
        }
        break;
    }
    return 0;
}