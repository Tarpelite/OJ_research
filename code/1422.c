#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=n+1;i<1000000;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i%j==0)
                break;
            else if (j==i-1)
            {
                i=100000001;
                break;
            }
        }
    }
    printf("%d",j+1);
    return 0;
}