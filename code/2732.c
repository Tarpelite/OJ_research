#include<stdio.h>
int main(){
    int n,k,i,j,l,r,a[100],N=0,M=1,H=0,max,min;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<k;i++){
    	scanf("%d %d",&l,&r);
	    N=0;M=1;H=0;max=0;min=0;
        for(j=l;j<=r;j++) N+=(a[j]%n);
        N=(N%n);
        for(j=l;j<=r;j++) M=((M*a[j])%n);
        M=(M%n);
        if(M<N){max=N;min=M;}
        else if(M==N) max=min=M;
        else{max=M;min=N;}
        H=a[min];
        for(j=min+1;j<=max;j++) H=(H^a[j]);
		printf("%d\n",H);}
    return 0;}