#include<stdio.h>
int main()
{
    int a,b,i,j,k,n;
    double m;
    scanf("%d",&a);
    for(i=1;i<150000-a;i++)
    { for(j=2,k=0,m=1.0,n=1;j<a+i;j++)
        {m=1.0*(a+i)/j;
        n=(int)m;
        if(m==n)
            k++;
        }
      if(k==0)
            break;
    }
    printf("%d",a+i);
    return 0;
}