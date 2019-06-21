#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;

    scanf("%d",&n);

    for(i=n+1;i<100100;i++)
    {
        for(j=i-1,k=0;j>1;j--)
        {
            if(i%j==0)
                k++;
        }

        if(k==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}