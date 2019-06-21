#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
	int n,K,a[10001],l,r,i=0,N,M,H,q,p,o=0;
	scanf("%d%d",&n,&K);
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	while(o<K){
		scanf("%d%d",&l,&r);
		q=l,N=0,M=1;
		while(l<=r){
			N+=a[l];
			N=N%n;
			l++;
		}
		while(q<=r){
			M*=a[q];
			M=M%n;
			q++;
		}
		H=a[min(M,N)];
		p=(min(M,N))+1;
		while(p<=(max(M,N)))
		{
			H=H^a[p];
			p++;
		}
		o++;
		printf("%d\n",H); 
	}
	return 0;
 }