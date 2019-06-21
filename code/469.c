#include<stdio.h>
#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y
int main()
{
	int n,k,l,r,L,R;
	scanf("%d%d",&n,&k);
	int a[n];
	int i=0;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++){
	int N=0,M=1,H;
		scanf("%d%d",&l,&r);
		int s;
		for(s=l;s<=r;s++){
			N+=a[s];
			M*=a[s];
			M%=n;
		}
		N%=n;
		M%=n;
		L=min(N,M);
		R=max(N,M);
		H=a[L];
		for(s=L+1;s<=R;s++){
			H=H^a[s];
		}
		printf("%d\n",H);
	}
	return 0;
}