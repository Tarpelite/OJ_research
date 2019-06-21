#include<stdio.h>
int main()
{    
    int n,k,i,j,l,r,a[100]={0},b[100]={0},N,M,H;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    for(i=0;i<k;i++){
    	scanf("%d%d",&l,&r);
    	for(j=l,N=0;j<=r;j++){
    		N+=a[j];
    		N%=n;
		}
    	for(j=l,M=1;j<=r;j++){
    		M*=a[j];
    		M%=n;
		}
    	if(N>=M){
    		l=M;
    		r=N;
		}
    	else{
    		l=N;
    		r=M;
		}
    	for(j=l+1,H=a[l];j<=r;j++)
    		H^=a[j];
    	b[i]=H;
	}
	for(i=0;i<k;i++)
		printf("%d\n",b[i]);
	return 0;
}