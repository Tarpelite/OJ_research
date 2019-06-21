#include <stdio.h>
int jiecheng(int n)
{ int i,s=1;
 for(i=1;i<=n;i++)
  { s*=i;
  }
  return s;
}
int fenzi(int m,int n)
{ int j,s=1;
 for(j=m;j>m-n;j--)
 { s*=j;
 }
 return s;
}
int main()
{ int n,m,t;
 scanf("%d%d",&m,&n);
  t=fenzi(m,n)/jiecheng(n);
  printf("%d",t);
}