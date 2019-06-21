#include<stdio.h>
#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
int n;
int a[10000];// 数组过大，用全局数组，默认初始化全为0 
int N(int l,int r){
	int sum=0;
	for(;l<=r;l++)
	sum=(sum%n+a[l]%n)%n;//这里该理解为((a mod b)+c)mod b=((a mod b)+(c mod b))mod b
	return sum;
}
int M(int l,int r){
	int sum=1;
	for(;l<=r;l++)
	sum=((a[l]%n)*(sum%n))%n;//这里该理解为((a mod b)*c)mod b=((a mod b)*(c mod b) )mod b
	return sum;
}
int H(int l,int r){
	int sum=a[l];
	for(l=l+1;l<=r;l++)
	sum=sum^a[l];
	return sum;
}
int main()
{
	int K,i=0,b[100],l,r;
	scanf("%d%d",&n,&K);
	 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<K;i++){
		scanf("%d%d",&l,&r);
		b[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
	}
	for(i=0;i<K;i++)
	printf("%d\n",b[i]);
	return 0;
}