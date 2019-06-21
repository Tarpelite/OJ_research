#include <stdio.h>
int n,a[100000];
int N(int l,int r)
{ int i,s=0;
 for(i=l;i<=r;i++)
 { s+=a[i];
 }
 return s%n;
}
int M(int l,int r)
{ int i,s=a[l]%n;
 for(i=l+1;i<=r;i++)
 { s=(s*(a[i]%n))%n;
 }
 return s;
}
int H(int l,int r)
{ int i,s=a[l];
 for(i=l+1;i<=r;i++)
 { s^=a[i];
 }
 return s;
}
int min(int a,int b)
{ if(a<b) return a;
  else return b;
}
int max(int a,int b)
{ if(a<b) return b;
  else return a;
}
int main()
{ int k,l,r,b[101];
  int i;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  for(i=0;i<k;i++) 
  { scanf("%d%d",&l,&r);
    b[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
  }
  for(i=0;i<k;i++)
  { if(i==k-1) printf("%d",b[i]);
  else printf("%d\n",b[i]);
  }
}