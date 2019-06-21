#include<stdio.h>
int main()
{
	int n,K,i,k,x,y,z;
	scanf("%d %d",&n,&K);
	int a[n];
	i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i=i+1;
	}
	int l[K];
	int r[K];
	int N[K];
	int M[K];
	int H[K];
	i=0;
	while(i<K){
		scanf("%d %d",&l[i],&r[i]);
		N[i]=0;
		M[i]=1;
		x=l[i];
		y=r[i];
		while(y>=x){
			N[i]=N[i]+a[x];
			M[i]=M[i]*a[x];
			M[i]=M[i]%n;
			x=x+1;
		}
		N[i]=N[i]%n;
		i=i+1;
	}
	i=0;
	while(i<K){
		x=N[i];
		y=M[i];
		if(N[i]>M[i]){
			z=x;
			x=y;
			y=z;
		}
		H[i]=a[x];
		x=x+1;
		while(x<=y){
			H[i]=H[i]^a[x];
			x=x+1;
		}
		printf("%d\n",H[i]);
		i=i+1;
	}
	return 0;
}