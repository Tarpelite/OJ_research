#include<stdio.h>
int a[10000]={0};
int n;
int N(int l,int r){
	int result=0,i;
	for(i =l;i<=r;i++){
		result += (a[i]%n);
		result = result %n;
	}	
	return result;
}
int M(int l,int r){
	int result = 1,i;
	for(i = l;i<=r;i++){
		result = result *(a[i]%n);
		result = result %n;
	}
	return result;
}
int H(int l, int r){
	int result = 0,i;
	for(i=l;i<=r;i++){
		result = result ^a[i];
	}
	return result;
}
int max(int a,int b){
	return  a>b?a:b;
	}

int min(int a,int b){
	return a<b?a:b; 
	}
int main()
{
	int i,k;
	int l,r;
	int p,q;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int num;
	while(k--){
		scanf("%d%d",&l,&r);
		p = min(N(l,r),M(l,r));
		q = max(N(l,r),M(l,r));
		num = H(p,q);
		printf("%d\n",num);
	}
	return 0;
}