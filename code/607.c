#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	
	int a[100];
	
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int sum=0;
	int ji=1;
	int l,r;
	int h[100];
	
	int N,M;
	int max,min;
	int j;
	for(j=0;j<k;j++){
		scanf("%d%d",&l,&r);
		for(i=l;i<=r;i++){
			sum+=a[i];
		}
		N=sum%n;
		for(i=l;i<=r;i++){
			ji*=a[i];
			ji=ji%n;
		}
		M=ji;
		
		if(N>M){
			min=M;
			max=N;
		}
		else  {
			min=N;
			max=M;
		}
		
		h[j]=a[min];
		for(i=min+1;i<=max;i++){
			h[j]=h[j]^a[i];
		}
		sum=0;
		ji=1;
	}
	for(i=0;i<k;i++){
		if(i!=(k-1)){
			printf("%d\n",h[i]);
		}
		else{
			printf("%d",h[i]);
		}
	}
	return 0;
}