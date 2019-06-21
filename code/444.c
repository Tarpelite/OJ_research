#include<stdio.h>
#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y
int main(){
	int n,k,l,r,L,R,s;
	scanf("%d%d",&n,&k);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=k;i++){
	int N=0,M=1,H;
		scanf("%d%d",&l,&r);
		for(s=l;s<=r;s++){
			N+=a[s];
			M*=a[s];
			M%=n;
		}
		N=N%n;
		M=M%n;
		L=min(N,M);
		R=max(N,M);
		H=a[L];
		for(s=L+1;s<=R;s++)
			H=H^a[s];
		printf("%d\n",H);
	}
	return 0;
}