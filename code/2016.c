#include<stdio.h>
int zs(int);
int main()
{
      int n,i,m;
      scanf("%d",&n);
      for(i=1;i<100000;i++)
      {
            n=n+1;
            m=zs(n);
            if(m!=0)
            {
                  i=10000000;
            }
      }
      printf("%d",n);
}
int zs(int a)
{
      int j;
      int k;
      for(j=2;j<a;j++)
      {
            k=a%j;
            if(k==0)
            {
                  j=1000000;
                  a=0;
            }
      }
      return a;
}