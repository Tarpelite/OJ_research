#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=n+1;i<110000;i++)
    {
        k=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}