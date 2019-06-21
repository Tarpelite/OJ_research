#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int n;

int coconut(int n)
   {
       int m=sqrt(n*1.0),shu=1;
       for(int i=2;i<=m;i++)
          if(n%i==0)
          {
            shu=0;
            break;
          }
       return shu;
   }

int main()
{
    scanf("%d",&n);
    while(1)
    {
        if(coconut(++n))
        {
            printf("%d",n);
            break;
        }
    }
	return 0;
}