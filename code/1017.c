#include <stdio.h>
#include <math.h>
#define N 100000
void main()
{
    int n,m;
    int i;
    int k;
    scanf("%d",&n);
    for(m=n+1;;m++)
    {
	  k=(int)sqrt( (double)m );
         {for(i=2;i<=k;i++)
             if(m%i==0)
               break;
	      }

    if(i>k)
        {printf("%d",m);
        break;}
    }


}