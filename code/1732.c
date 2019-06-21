#include <stdio.h>

int main() {
	int n,K,i,l,r,N,M,H,j,min,max;
	scanf("%d%d",&n,&K); 
	int a[n],b[K];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<K;i++){
	    scanf("%d%d",&l,&r);
		N=a[l]%n;M=a[l]%n;
		for(j=l+1;j<=r;j++){
			N+=a[j];N=N%n;
			M*=a[j];M=M%n;
		}	
		if(N>=M){
        	max=N;
        	min=M;
		}
        else{
            max=M;
            min=N;
        }
        H=a[min];
		for(j=min+1;j<=max;j++)
		    H^=a[j];
		b[i]=H;  
	}
	for(i=0;i<K;i++)
	    printf("%d\n",b[i]);
	
	return 0;
}