#include <stdio.h>
#include<math.h>

int main() {
	long long m,n,i,j,A=1,B=1;
	scanf("%ld%ld",&m,&n);
	if(n>m/2)n=m-n;
	for(i=m;i>=m-n+1;i--){
		A*=i;
		}
	for(i=n;i>1;i--)
	{
		B*=i;
	}

	printf("%d",A/B);
	return 0;
}