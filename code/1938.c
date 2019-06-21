#include <stdio.h>

int main()
{
    int i, n, j, k;
    k=0;

    scanf("%d", &n);

    for(j=n+1;;j++)
    {
        for(i=2;i<j;i++)
            if(j%i==0)
            break;
            if(i>=j)
            {
                printf("%d", j);
                break;
            }
    }

    return 0;
}