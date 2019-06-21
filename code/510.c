#include <stdio.h>
int A[10000];
int N(int l,int r,int n){
	int tem,ans=0;
	for(int i=l;i<=r;i++)
	{
		ans=ans+A[i];
	}
	ans=ans%n;
	return ans;
}

int M(int l,int r,int n){
	int i;
	long long m=A[l]%n;
	for(i=l+1;i<=r;i++){
		m=(m*(A[i]%n))%n;
	}
	return m%n;
}

int H(int l,int r){
	int ans=A[l];
	for(int i=l+1;i<=r;i++){
		ans=ans^A[i];
	}
	return ans;
}

int main()
{
	int n,K;
	scanf("%d %d",&n,&K);
	
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
    
	int i=1,l,r,min,max,ans;
	while(i<=K){
		scanf("%d %d",&l,&r);
		min=N(l,r,n)<M(l,r,n)?N(l,r,n):M(l,r,n);
		max=N(l,r,n)>M(l,r,n)?N(l,r,n):M(l,r,n);
		ans=H(min,max);
		printf("%d\n",ans);
		i++;
	}
	
	
	return 0;
}