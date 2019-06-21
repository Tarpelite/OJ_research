#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long int i;
    int j,flag;
    scanf("%d",&n);
    if(n==1)
    {
        printf("2");
    }
    else
    {
        for(i=n+1; i<=100005; i++)
        {
            for(j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                printf("%lld",i);
                break;
            }
        }
    }
    return 0;
}