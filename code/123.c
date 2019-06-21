#include <stdio.h>
int prime(int i)
{
  for(int j=2;j*j<=i;j++)
  if(i%j==0) return 0;
             return 1;
}
int main()
{
  int x,i;
  scanf("%d",&x);
  for(i=x+1;i<=100005;i++)
  {
      if(prime(i))
      {
        printf("%d",i);
        return 0;
      }

  }

}