#include<stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	if(n==1){
		printf("2");
		return 0;
	}
	n=n+1;
	while(n<=200000){
		i=2;
		while(i<n){
			a=n%i;
			if(a==0){
				goto ak;
			}
			i=i+1;
		}
		goto exp;
		ak:
			n=n+1;
	}
	exp:
		printf("%d",n);
		return 0;
}