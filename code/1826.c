#include <stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int n=0,a[105]={0};
int main()
{
	int k,i=0,j=0,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(j<k){
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
		j++;
	}
	return 0;
}
int N(int l,int r)
{
	int sum=0,i,e;
	for(i=l;i<=r;i++){sum=(sum+a[i]%n)%n;}
	return sum;
}
int M(int l,int r)
{
	int prd=1,i,e;
	for(i=l;i<=r;i++){prd=(prd*(a[i]%n))%n;}
	return prd;
}
int H(int l,int r)
{
	int p=a[l],i;
	for(i=l+1;i<=r;i++){p^=a[i];}
	return p;
}