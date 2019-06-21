#include <stdio.h>
int max(int a,int b){
	return(a>b)?a:b;
}
int min(int a,int b){
	return(a<b)?a:b;
}
int main()
{
	int i=0,j=0,d=1,n,k,a[101]={0},l[101]={0},r[101]={0},N[101]={0},M[101]={0},H[101]={0},sum=0;
	scanf("%d %d",&n,&k);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<k;i++){
		scanf("%d %d",&l[i],&r[i]);
	}
	for (i=0;i<k;i++){
		for (j=l[i];j<=r[i];j++){
			sum+=a[j];
		}
		N[i]=sum%n;
		sum=0;
	}
	for (i=0;i<k;i++){
		for (j=l[i];j<=r[i];j++){
			d*=a[j];
			d%=n;
		}
		M[i]=d%n;
		d=1;
	}
	/*for(i=0;i<k;i++){
		printf("%d %d\n",N[i],M[i]);
	}*/
	for (i=0;i<k;i++){
		j=min(N[i],M[i]);
		H[i]=a[j];
		for (;j<max(N[i],M[i]);j++){
			H[i]^=a[j+1];
		}
		printf("%d\n",H[i]);
	}
	return 0;
}