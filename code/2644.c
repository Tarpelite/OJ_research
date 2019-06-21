#include<stdio.h>
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],l[k],r[k];
	int N[k],M[k],H[k];
	int i=0,j=0,x=0,y=0,z=0,m=0;
	int temp;
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(j=0;j<k;j++){
		scanf("%d %d",&l[j],&r[j]);
		N[j]=0;
		M[j]=1;
		H[j]=0;
	}
	for(x=0;x<k;x++){
		for(y=l[x];y<=r[x];y++){
			N[x]=((N[x]%n)+a[y]%n)%n;
			M[x]=((M[x]%n)*(a[y]%n))%n;
		}
	}
	for(z=0;z<k;z++){
		if(N[z]>M[z]){
			temp=N[z];
			N[z]=M[z];
			M[z]=temp;
		}
		for(m=N[z];m<=M[z];m++){
			H[z]^=a[m];
		}
		printf("%d\n",H[z]);
	}
	return 0;
}