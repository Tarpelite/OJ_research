#include<stdio.h> 
int N(int ,int);
int M(int ,int);
int H(int ,int);
int min(int ,int);
int max(int ,int);

int n,k,l,r,a[1000];
int p=0,b[1000];

int main(){
	
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<k;j++,p++){
    	scanf("%d%d",&l,&r);
	   b[p]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))); 
	}
	for(int j=0;j<p;j++){
		printf("%d\n",b[j]);
	}
	return 0;
}

int N(int l,int r){
	int sum=0;
	for(int i=l;i<r+1;i++){
	    sum=sum+a[i];	
	    sum=sum%n;
	}
	return sum;
}

int M(int l,int r){
	int sum=1;
	for(int i=l;i<r+1;i++){
	    sum=sum*a[i];	
	    sum=sum%n;
	}
	return sum;
}

int H(int l,int r){
	int sum=a[l];
	for(int i=l+1;i<r+1;i++){
		sum=sum^a[i];
	}
    return sum;
}

int min(int x,int y){
	if(x>y){
		return y;
	}
    else return x;
}

int max(int x,int y){
	if(x>y){
		return x;
	}
    else return y;
}