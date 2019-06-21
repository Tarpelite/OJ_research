#include<stdio.h>
int a[100001]={0};
int main()
{
  int n,i,m,k,j=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);

  for(i=100001;i>0;i--)
  {
      if(a[i]!=0)
      j++;
      if(j==k)
        break;

  }



  printf("%d %d",i,a[i]);

return 0;
}