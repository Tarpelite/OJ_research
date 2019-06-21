#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,m,flag=0;
    scanf ("%d",&n);
    for (i=n+1;!flag;i++)
    {
        flag=1;
        for (j=2;j<i;j++)
        {
            m=i%j;
            if (m==0)
            {
                flag=0;
            }
        }
    }
    if (flag==1)
    printf ("%d",i-1);
    return 0;
}