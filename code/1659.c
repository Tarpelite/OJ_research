#include <stdlib.h>
#include<stdio.h>
int A[100000];

int N(int a,int b,int n){
	int sum=0;
	for(;a<=b;a++){
		sum+=A[a];
	}
	return sum%n;
}
int M(int a,int b,int n){
	int sum=1;
	for(;a<=b;a++){
		sum=(sum*A[a])%n;
	}
	return sum;
}
int H(int a,int b){
	int sum=A[a];
	for(;a<b;a++){
		sum=sum^A[a+1];
	}
	return sum;
}
int main(){
	int n,k,l[1000],r[1000],i,a,b,max,min,h;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<k;i++){
		a=N(l[i],r[i],n);
		b=M(l[i],r[i],n);
		if(a<b){
			min=a;
			max=b;
		}
		else{
			min=b;
			max=a;
		}
	    h=H(min,max);
	    printf("%d\n",h);	
	}
	return 0;
}