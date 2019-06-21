#include <stdio.h>
#define MAX_N 100
int a[MAX_N+5];
int n; 

int N(int l,int r){
	int y=0,i;
	for(i=l;i<=r;i++)
		y+=(a[i]%n),y%=n;
	return y;
}

int M(int l,int r){
	int y=1,i;
	for(i=l;i<=r;i++)
		y*=(a[i]%n),y%=n;
	return y;
}

int H(int l,int r){
	int y=0,i;
	for(i=l;i<=r;i++)
		y^=a[i];	
	return y;
}

int Max(int x,int y){
	return x>y?x:y;
}

int Min(int x,int y){
	return x<y?x:y;
}


int main ()
{
	int mx,mn,k,i,l,r;
	
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(k--){
		scanf("%d%d",&l,&r);
		mx=Max(N(l,r),M(l,r));
		mn=Min(N(l,r),M(l,r));
		printf("%d\n",H(mn,mx));
	}
	return 0;
}