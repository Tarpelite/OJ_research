#include<stdio.h>
int zs(int n)
{
    int i,a=1;
    if(n<2)
    {
      a=1;
    }
    else
        {
         for(i=2;i<n;i++)
         {
          if(n%i==0)
         {

          a=2;
          break;
         }
          }
          return a;
}
}


int main()
{
    int a,n,i;
    scanf("%d",&n);
    for(i=n+1;i<200000;i++)
    {
     if(zs(i)==1)
     {
       a=i;
       break;
     }

     }





    printf("%d",a);
}