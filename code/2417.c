#include<stdio.h>
int N(int l,int r,int a[],int size,int n){
	int i,sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
	}
	return sum%n;
}
long long M(int l,int r,int a[],int size,int n){
	int i,ji=1;
	for(i=l;i<=r;i++){
		ji*=a[i];
		if(ji>=n){
			ji=ji%n;
		}
	}
	return ji%n;
}
int H(int l,int r,int a[],int size){
	int i,result=a[l];
	for(i=l+1;i<=r;i++){
		result=result^a[i];
	}
	return result;
}
int main()
{
	int n,K,i;
	scanf("%d %d",&n,&K);
	int a[n];
	int b[K],c[K],B[K],C[K];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<K;i++){
		scanf("%d%d",&b[i],&c[i]);
	}
	for(i=0;i<K;i++){
		B[i]=N(b[i],c[i],a,n,n);
	} 
	for(i=0;i<K;i++){
		C[i]=M(b[i],c[i],a,n,n);
	}
	int min[K],max[K],d;
	for(i=0;i<K;i++){
		if(B[i]==C[i]){
			min[i]=B[i];
			max[i]=C[i];
		}else{
			min[i]=B[i]<C[i]?B[i]:C[i];
			max[i]=B[i]>C[i]?B[i]:C[i];
		}
		d=H(min[i],max[i],a,n);
		printf("%d\n",d);
	}
	return 0;
}