#include<stdio.h>
int main(){
	int n,K,a[500],b[109];
	scanf("%d %d",&n,&K);
	int l,r,N,M,H;
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=K-1;i++)
	{
		scanf("%d%d",&l,&r);
		N=0;M=1;H=0;
		for(int k=l;k<=r;k++){N+=a[k];N=N%n	;	}N=N%n;
		for(int k=l;k<=r;k++){M*=a[k];M=M%n;		}M=M%n;
		if(N<M){l=N;r=M	;	}else{l=M;r=N;		}
		for(int k=l;k<=r;k++){H=H^a[k];		}
		b[i]=H;
	}
	for(int i=0;i<=K-1;i++) printf("%d\n",b[i]);
	return 0;
}