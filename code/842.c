#include <stdio.h>
#include <stdlib.h>
int a[105],n;
int max(int x,int y)
  {
     return x>y?x:y;
  }
int min(int x,int y)
  {
     return x<y?x:y;
  }
int N(int l,int r)
{
  int i,s1;
  for(i=l,s1=0;i<=r;i++)
    s1+=(a[i]%n),
   s1=s1%n;
  return s1;
}
int  M(int l,int r)
{
  int i,s2;
  for(i=l,s2=1;i<=r;i++)
    s2*=(a[i]%n),
    s2=s2%n;
  return s2;
}
int H(int l,int r)
{
  int i,s3;
  for(i=l+1,s3=a[l];i<=r;i++)
    s3 ^=a[i];
   return s3;
}
int main()
{
  int K,l[105],r[105],i;
  scanf("%d %d",&n,&K);
  for(i=0;i<n;i++)  scanf("%d",&a[i]);
  for(i=0;i<K;i++)
      scanf("%d %d",&l[i],&r[i]);
  for(i=0;i<K;i++)
      {
      printf("%d\n",H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i]))));
      }
   return 0;
}