#include<string.h>
#include <stdio.h>

int max(int a,int b);
int min(int a,int b);
int N(int* a,int l,int r,int n);
int M(int *a,int l,int r,int n);
int H(int l,int r,int* a);


int main()
{
	int a[10005],n,k,l[102],r[102];
	int i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d %d",&l[i],&r[i]);
	}
	for(i=0;i<k;i++){
		printf("%d ",H(min(N(a,l[i],r[i],n),M(a,l[i],r[i],n)),max(N(a,l[i],r[i],n),M(a,l[i],r[i],n)),a));
		if(i<k-1){
		printf("\n"); 
	}
    } 	
    return 0;
}

int max(int a,int b)
{
	int t;
	t=a;
	if(a<b){
		t=b;
	}
	return t;
}

int min(int a,int b){
	int t;
	t=a;
	if(a>b){
		t=b;
	}
	return t;
}

int N(int* a,int l,int r,int n)
{
	int i,sum=0;
	for(i=l;i<r+1;i++){
		sum=sum+a[i];
	}
	return sum%n;
}

int M(int* a,int l,int r,int n)
{
	int i,sum=1;
	for(i=l;i<r+1;i++){
		sum*=(a[i]%n);
		sum%=n;
	}
	return sum%n;
}

int H(int l,int r,int *a){
	int i,sum;
	sum=a[l];
	for(i=l+1;i<r+1;i++){
			sum=sum^a[i];
	}
	return sum;
}