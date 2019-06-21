#include <stdio.h>
int main()
{
    int iszhishu(int x);
   int n,i;
   scanf("%d",&n);
   i=n+1;
   while(1)
   {
      if(iszhishu(i))
      {
        printf("%d ",i);
        break;
      }
      else i++;
   }
    return 0;
}
int iszhishu(int x)
{
    int i,n=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            n+=1;
    }
    if(n==0)
        return 1;
    else return 0;
}