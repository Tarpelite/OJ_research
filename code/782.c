#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,y,n;
    scanf("%d",&x);
    for(i=x+1;i<2*x+1;i++)
  {
      for(n=2;n<i+1;n++)
      {
          y=i%n;
          if(y==0&&n!=i)
          {
              break;
          }
          if(n==i-1)
          {
              printf("%d",i);
              break;
          }
      }
      if(y!=0&&n!=i)
    {
        break;
    }
  }
    return 0;
}