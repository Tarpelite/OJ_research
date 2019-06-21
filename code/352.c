#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int n,k,i,j,b[1001],l[1001],r[1001],N[1001],M[1001],H[1001];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<k;i++)
	scanf("%d %d",&l[i],&r[i]);
	for(j=0;j<k;j++){
		N[j]=0;
		for(i=l[j];i<r[j]+1;i++){
			N[j]+=b[i];
		}
	    N[j]=N[j]%n;
	}
	
	for(j=0;j<k;j++){
		M[j]=1;
		for(i=l[j];i<r[j]+1;i++){
			M[j]=(M[j]*b[i])%n;
		}
	}
	
	for(j=0;j<k;j++){
		if(N[j]>M[j]){
			H[j]=b[M[j]];
			for(i=M[j];i<N[j];i++){
				H[j]=H[j]^b[i+1];
			}
		}
		else if(N[j]<M[j]){
			H[j]=b[N[j]];
			for(i=N[j];i<M[j];i++){
				H[j]=H[j]^b[i+1];
			}
		}
		else
		H[j]=b[M[j]];
	printf("%d\n",H[j]);
	}
  return 0;
}