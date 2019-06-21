#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m=0,i,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            printf("%d\n",i);
            break;
        }
        m=0;
    }
    return 0;
}