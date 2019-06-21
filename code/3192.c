#include <stdio.h>

int main()
{
    int n,z,i,j,t=0;
    scanf("%d",&n);
    for(i=n+1; i<1000000; i++)
    {
        for(j=2; j<=i; j++)
        {
            if (i%j==0)
          break;

        }
        if (j==i)
            break;
    }
    printf("%d",i);
    return 0;

}