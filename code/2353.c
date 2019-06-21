#include<stdio.h>
int a[1005],n;
long long N(int l,int r){
	int i;
	long long sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
		sum=sum%n;
	}
	
	return sum;
}
long long M(int l,int r){
	int i;
	long long sum=1;
	for(i=l;i<=r;i++){
		sum*=a[i];
		sum=sum%n;
	}

	return sum;
}
int max(int a,int b){
	int max=a;
	if(b>a) max=b;
	return max;
}
int min(int a,int b){
	int min=a;
	if(b<a) min=b;
	return min;
}
int H(int l,int r)
{
	int sum=0;
	for(int i=l;i<=r;i++){
		sum^=a[i];
		
	}
	return sum;
}
int main()
{
	int K,i,l,r;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	while(~scanf("%d%d",&l,&r)){
	
		int g=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		printf("%d\n",g);
	}
 }