#include<stdio.h>
int main()
{int n,k,i,j,x,a[100005],y,z,c=1,b=0,d=0,p,q,m,s;
   scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {scanf("%d",&x);
  a[i]=x;}
  for(j=1;j<=k;j++)
  {scanf("%d%d",&y,&z);

 b=0;
 for(s=y;s<=z;s++)
   {b=b+a[s]%n;
   b=b%n;}
 c=1;
 for(s=y;s<=z;s++)
    {c=(c*(a[s]%n))%n;
    c=c%n;}
 if(b<=c)
   p=b,q=c;

 else
    p=c,q=b;
 m=p;
 d=a[p];
 for(m=p+1;m<=q;m++)
 d=d^a[m];

 printf("%d\n",d);
 }


  }