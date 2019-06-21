#include<stdio.h>
int main(){
	int n,K;
	scanf("%d %d",&n,&K);
	int i;
	int a[n];
	i=0; 
	while(i<n){
		scanf("%d",&a[i]);
		i=i+1;
	}
	
	
	i=0;
	while(i<K){
		int l,r;
		scanf("%d %d",&l,&r);
		
		
		int sum=0;
		int q=1;
		while(l<=r){
			sum=sum+a[l];
			q=q*a[l];
				sum=sum%n;
				q=q%n;
			l=l+1;
		} 

	
		int t;
		if(sum<q){
			t=q;
			q=sum;
			sum=t;
		}
		t=a[q];
		while(q<sum){
			q=q+1;
			t=t^a[q];
		}
		printf("%d\n",t);
	
		i=i+1;
	}

	return 0;
}