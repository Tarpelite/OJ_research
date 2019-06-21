#include<stdio.h>
int main()
{
	int n,K,i,j,p,q;
	scanf("%d%d",&n,&K);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int b[K][2],N[K],M[K],H[K];
	for(i=0;i<K;i++){
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
	for(i=0;i<K;i++){
		p=0;
		q=1;
		for(j=b[i][0];j<=b[i][1];j++){
			p=p+a[j];
			q=((q%n)*(a[j]%n)%n);
		}
		N[i]=p%n;
		M[i]=q;
		if(N[i]<M[i]){
			j=N[i];
			H[i]=a[j];
			j++;
			while(j<=M[i]){
				H[i]=H[i]^a[j];
				j++;
			}
		}
		else if(N[i]>M[i]){
			j=M[i];
			H[i]=a[j];
			j++;
			while(j<=N[i]){
				H[i]=H[i]^a[j];
				j++;
			}
		}
		else{
			j=N[i];
			H[i]=a[j];
		}
	}
	for(i=0;i<K;i++){
		printf("%d\n",H[i]);
	}
}