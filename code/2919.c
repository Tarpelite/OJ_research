#include<stdio.h>
int main()
{
  int n,k,i,s1=0,s2=1,g1,g2,y,a[100005];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  int N(int c,int d)
  {
  for(i=c;i<=d;i++)
  {
  (s1)+=a[i];
  }
  g1=(s1)%n;
  s1=0;
  return g1;
  }

  int M(int c,int d)
  {i=c;
  s2=a[i]%n;
  for(;i+1<=d;i++)
  {
  (s2)=((s2)*(a[i+1]%n))%n;
  }
  return s2;
  }

  int max(int a,int b)
  {
  return (a>b)?a:b;
  }

  int min(int a,int b)
  {
  return (a>b)?b:a;
  }

  int H(int c,int d)
  {y=a[c];
  for(i=c+1;i<=d;i++)
  y=y^a[i];
  printf("%d\n",y);
  }


  while(k--)
  {
  int c,d;
  scanf("%d%d",&c,&d);
  H(min(N(c,d),M(c,d)),max(N(c,d),M(c,d)));
  }
  return 0;
}