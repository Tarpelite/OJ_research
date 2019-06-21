#include<stdio.h>
int main()
{
	int l,r,n,K,i,j,a[10000],b[100],c[100],d[100],x,y;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++){
	scanf("%d%d",&b[i],&c[i]);
	}
	for(i=0;i<K;i++){
			l=b[i];
			r=c[i];
		int N=0;
		for(j=l;j<=r;j++){
			N=(N+a[j])%n;//
		}
			x=N;
		int M=1;
		for(j=l;j<=r;j++){
			M=(M*a[j])%n;
		}
			y=M;
		if(x>y){
			r=x;
			l=y;
		}
		else{
			l=x;
			r=y;
		}
		int H;
		H=a[l];
		for(j=l+1;j<=r;j++){
			H=H^a[j];
		}
		d[i]=H;
	}
	for(i=0;i<K;i++){
	printf("%d\n",d[i]);}
	return 0;
	}