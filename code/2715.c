#include<stdio.h>
int main()
{    int n,i=1,j,a,k,b=1;
	scanf("%d",&n);
	while(1){
		n=n+1;
		int k=1;
		for(j=2;j<n;j++){
			a=n%j;
			if(a==0){
			k=0;	
			break;
			}
		}
		if(k==1){
		break;
		}
	}
	printf("%d",n);
	return 0;
}