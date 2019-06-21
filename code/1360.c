#include <stdio.h>
#define MAXN 100
int a[MAXN]={0};
int counts=0;
void  comb(int m,int k)
{     int i,j;
      for (i=m;i>=k;i--)
      { 
          a[k]=i;
          if (k>1)
              comb(i-1,k-1);
          else
          {   
              counts++;                 
          }
      }
}
int main()
{   
      int m,r;
      scanf("%d",&m);
      scanf("%d",&r);
      counts=0;
      a[0]=r;
      comb(m,r);
      printf("%d\n",counts);
      return 0;
}