#include<stdio.h>
int x[100001]={0};
int main()
{
  int n,i,m,k,a=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        x[m]++;
    }
    scanf("%d",&k);
    //printf("%d%d\n",x[1],x[4]);
  for(i=100001;i>0;i--)
  {
      if(x[i]!=0)
      a=a+1;
      if(a==k)
        break;

  }



  printf("%d %d",i,x[i]);

return 0;
}