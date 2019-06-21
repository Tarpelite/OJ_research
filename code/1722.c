#include<stdio.h>
int main()
{
	int n,k,l,r,N=0,M=1,H,i=0,j,a[105],b,c[105],d;
	scanf("%d%d",&n,&k);
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	while(i<k)
   {scanf("%d%d",&l,&r);
	for(b=l;b<=r;b++)
	 {N=N+a[b];
	  M=M*a[b]%n;
	 }
	N=N%n;
	if(N<M)
	l=N,r=M;
	else l=M,r=N;
	H=a[l];
	for(d=l+1;d<=r;d++)
	H=H^a[d];
	N=0;
	M=1;
	i++;
	printf("%d\n",H);
   }
	return 0;
}