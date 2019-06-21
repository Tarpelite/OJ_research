#include<stdio.h>
int N(int ,int );
int M(int ,int );
int H(int ,int );
int a[100]={0};
int b[100]={0};
int c[100]={0};
int max(int ,int);
int min(int ,int);
int m,n,h,i,x,y,l,r,p,o,j;
int main()
{
      scanf("%d%d",&x,&y);
      for ( i=0; i<x; i++)
      {
            scanf("%d",&a[i]);
            b[i]=a[i]%x;
      }
      for ( i=0; i<y; i++)
      {
            scanf("%d%d",&l,&r);
            p=i;
            n=N(l,r);
            m=M(l,r);
            o=min(n,m);
            j=max(n,m);
            h=H(o,j);
            c[p]=h;
      }
      i=0;
      while(i<y)
      {
            printf("%d\n",c[i]);
            i++;
      }
      return 0;
}
int N(int l,int r)
{
      int n=0;
      int i=1;
      for ( i=l; i<=r; i++)
      {
            n=n+a[i];
      }
      n=n%x;

      return n;
}
int M(int l,int r)
{
      int m=1;
      int i=0;
      for ( i=l; i<=r; i++)
      {
            m=((m%x)*b[i])%x;
      }

      return m;
}
int H(int l,int r)
{
      int h=a[l];

      if(r!=l)
      {
            int i;
            for ( i=1+l; i<=r; i++)
            {
                  h=h^a[i];
            }
      }
      return h;
}
int max (int a,int b)
{
      int r=a;
      if(b>r)
      {
            r=b;
      }
      return r;
}
int min(int a,int b)
{
      int r=a;
      if(b<r)
      {
            r=b;
      }
      return r;
}