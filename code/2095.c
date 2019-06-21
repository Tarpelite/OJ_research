#include <stdio.h>
int N(int l,int r,int n,int a[]);
int M(int l,int r,int n,int a[]);
int H(int l,int r,int n,int a[]);
int main(){
	int n,k,j=1;
	int l,r;
	int a[150]={0};
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(j<=k){
		scanf("%d%d",&l,&r);
		int min,max,temp;
		min=N(l,r,n,a);
		max=M(l,r,n,a);
		if(min>max){
			temp=min;
			min=max;
			max=temp;
		}
		printf("%d\n",H(min,max,n,a));
			j++;
	}
	return 0;
}
int N(int l,int r,int n,int b[]){
	int sum=0;
	for(int i=l;i<=r;i++){
		sum=sum+b[i];
	}
	return sum%n;
} 
int M(int l,int r,int n,int b[]){
	int sum=1;
	for(int i=l;i<=r;i++){
		if(sum>=n) sum%=n;
		sum*=b[i];
	}
	return sum%n;
}
int H(int l,int r,int n,int b[]){
	int sum=b[l];
	for(int i=l+1;i<=r;i++){
		sum=sum^b[i];
	}
	return sum;
}