#include<stdio.h>
int n,a[1000],min[1000],max[1000],b[1000],c[1000],j[1000];
int N(int l,int r){
	int i,sum=0;
	for(i=l;i<=r;i++){
		sum=sum+a[i];
	}
	sum=sum%n;
	return sum;
}
int M(int l,int r){
	int i,sum=1;
	for(i=l;i<=r;i++){
		j[i]=a[i]%n;
		sum=sum*j[i]%n;
	}
	
	return sum;
}
int H(int min,int max){
	int i,sum=a[min];
	if(min==max){
		sum=a[min];
	}
	else for(i=min;i<max;i++){
		sum=sum^a[i+1];
		}
	return sum;
}
int main(){
	int k,i;
	
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&b[i],&c[i]);
	}
	for(i=0;i<k;i++){
		if(M(b[i],c[i])<N(b[i],c[i])){
			min[i]=M(b[i],c[i]);
			max[i]=N(b[i],c[i]);
		}	
		else {
			max[i]=M(b[i],c[i]);
			min[i]=N(b[i],c[i]);
		}
		
	}
	for(i=0;i<k;i++){
		printf("%d\n",H(min[i],max[i]));
	}
	return 0;
	
	
}