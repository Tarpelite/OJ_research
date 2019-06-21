#include <stdio.h>
#include <math.h>


int main(){
    int n,x,i,t;

   scanf("%d",&n);

   for(x=n+1;;x++)
   {
     if(n==1)
        {printf("2");
        break;}
     else if(n==2)
        {printf("3");
        break;}
    else
      {
    for(i=2,t=0;i<x;i++)
    {
        if(x%i==0)break;
        else t++;
    }
      }
      if(t==x-2)
      {
          printf("%d",x);
          break;
      }
   }

   return 0;
}