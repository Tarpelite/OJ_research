#include <stdio.h>
int a[101],l[101],r[101],n;

int N(int l,int r)
{
	int N=0,i;
	for(i=l;i<=r;i++){
		N=N+a[i];
	}
	N=N%n;
	return N;
}

int M(int l,int r)
{
	int M=1,i;
	for(i=l;i<=r;i++){
		M=(M*a[i])%n;
	}
	return M;
}

int H(int l,int r)
{
	int H,i;
	H=a[l];
	for(i=l+1;i<=r;i++){
		H=H^a[i];
	}
	return H;
}

int min(int x,int y)
{
	if(x>y) return y;
	else return x;
}

int max(int x,int y)
{
	if(x>y) return x;
	else return y;
}

int main()
{
	int K,i,k;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(k=0;k<K;k++){
		scanf("%d%d",&l[k],&r[k]);
	}
	for(k=0;k<K;k++){
		printf("%d\n",H(min(N(l[k],r[k]),M(l[k],r[k])),max(N(l[k],r[k]),M(l[k],r[k]))));
	}
	return 0;
 }