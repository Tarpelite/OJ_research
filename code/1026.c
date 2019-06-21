#include<stdio.h>
int N(int l,int r);
int M(int l,int r);
int a[100]={0};
int n;
int main()
{
	int k,l,r,ll,rr,xx;
	int i,j;
	j = 0;
	int c[100]={0};
	int b[100]={0};
	scanf("%d%d",&n,&k);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	
	for(int m=0;m<k;m++){
		scanf("%d%d",&l,&r);
		ll = N(l,r) <= M(l,r)?N(l,r) : M(l,r);
		rr = N(l,r) >= M(l,r)?N(l,r) : M(l,r);
		xx = b[ll];
		for(i = ll+1;i <= rr;i++){
			xx = xx^b[i];
		}
		c[j] = xx;
		printf("%d\n",c[j]);
		j++;
	}
	
}

int N(int l,int r){
	int i;int x;
	x=a[l];
	for(i = l+1;i<=r;i++){
		x=x+a[i];
	}
	return x%n;
}
int M(int l,int r){
	int i;int x;
	x=a[l];
	for(i = l+1;i<=r;i++){
		x=x*a[i]%n;
	}
	return x%n;
}