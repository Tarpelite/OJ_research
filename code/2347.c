#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,s1=1,s2=1,t;
    t=m-n+1;
    for(i=0;;i++)
    {
        s1=s1*m;
        if(m==t)
        {
            break;
        }
        m--;
    }
    for(j=0;;j++)
    {
        s2=s2*n;
        if(n==1)
        {
            break;
        }
        n--;
    }
    int c;
    c=s1/s2;
    printf("%d",c);
    return 0;
}