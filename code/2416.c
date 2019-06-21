#include<stdio.h>
#include<math.h>

 int main() 
 { 
  int n,k,i,j,a[10000],N=0,M=1,H=0,h[10000],p,q,P,Q;
 scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=0;i<k;i++)
  {
  	N=0;
  	M=1;
  	int l,r;
  	scanf("%d%d",&l,&r);
  	for(j=l;j<=r;j++){
  		N=N+a[j];
  		M=(M*a[j])%n;
	  }
	  p=N%n;
	  q=M%n;
	  P=((p+q)-abs(p-q))/2;
	  Q=((p+q)+abs(p-q))/2;
	  H=a[P];
	  for(j=P+1;j<=Q;j++){
  	  H=H^a[j];
	  }
	  h[i]=H;
  }
  for(i=0;i<k;i++)
  {
  	 printf("%d\n",h[i]);
  }
 
  return 0; 
 }