#include<stdio.h>
int main()
{
    int a,i,j,n;
    scanf("%d",&a);

    for(i=a+1; i<101000; i++)
    {n=0;
        for(j=2; j<a+1; j++)
        {
            if(i%j==0)
            {
                n=n+1;
            }
        }
        if(n!=0)
            continue;
        if(n==0)
        {
            printf("%d",i);
            break;
        }

    }

    return 0;
}