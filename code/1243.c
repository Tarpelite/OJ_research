#include <stdio.h>

int N(int,int,int *,int);
int M(int,int,int *,int);
int H(int,int,int *);
int Max(int,int);
int Min(int,int);

int a[100],h[100];

int main ()
{
	int max,min,n,k,i,l,r;
	
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		max=Max(N(l,r,a,n),M(l,r,a,n));
		min=Min(N(l,r,a,n),M(l,r,a,n));
		h[i]=H(min,max,a);
	}
	
	for(i=0;i<k-1;i++)
		printf("%d\n",h[i]);
	printf("%d",h[k-1]);
	return 0;
}

int N(int l,int r,int *a,int n){
	int result=0,i;
	for(i=l;i<=r;i++)
		result+=(a[i]%n),result%=n;
	return result;
}

int M(int l,int r,int *a,int n){
	int result=1,i;
	for(i=l;i<=r;i++)
		result*=(a[i]%n),result%=n;
	return result;
}

int H(int l,int r,int *a){
	int result=0,i;
	for(i=l;i<=r;i++)
		result=result^a[i];	
	return result;
}

int Max(int x,int y){
	int result;
	result=x>y?x:y;
	return result;
}

int Min(int x,int y){
	int result;
	result=x<y?x:y;
	return result;
}