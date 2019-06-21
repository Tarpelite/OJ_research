#include <stdio.h>
int main()
{ int a[100000],b[100000] ,n,x,k;
  int i,p=0;
  scanf("%d",&n);
  for(i=0;i<100000;i++) 
  { a[i]=0;
    b[i]=0;
  }
  for(i=0;i<n;i++) 
  { scanf("%d",&x);
    a[x]=x;b[x]++;
  }
  scanf("%d",&k);
  for(i=100000;i>0;i--)
  { if(a[i]!=0) p++;
   if(p==k) break;
  }
  printf("%d %d",a[i],b[i]);
  return 0;
}