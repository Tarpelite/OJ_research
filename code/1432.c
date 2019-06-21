#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prime,prime_;
    int i,m,j;
    scanf("%d",&prime);
    for (i = 1;1; i++)
    {
        for (j = 2; j < prime + i; j++)
        {
            m = (prime + i) % j;
            if (m == 0)
            {
                break;
            }
        }
    if (m != 0)
    {
        prime_ = prime + i;
        break;
    }
    }
    printf("%d",prime_);
    return 0;
}