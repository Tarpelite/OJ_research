#include<stdio.h>
int main()
{
	int n,k,a[105],l,r,i,j,H[105],N1,M1;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		int N=0,M=1;
		for(j=l;j<=r;j++){
			N+=a[j];
			M*=a[j];
			N=N%n;
		    M=M%n;
		}
		N1=N>M?N:M;
		M1=N<M?N:M;
		H[i]=a[M1];
	if(N!=M){
			for(j=M1+1;j<=N1;j++){
				H[i]=H[i]^a[j];
			}
		}

	}
	for(i=0;i<k;i++){
		printf("%d\n",H[i]);
	}
	
	
}