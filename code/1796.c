#include <stdio.h>
#define N 100000
int next_prime(int n);
int main()
{
	int n;
	scanf("%d",&n);
	if(n>N) return 1;
	else{
		printf("%d\n",next_prime(n));
		return 0;
	}
}
int next_prime(int n)
{
	int i,j,flag;
	for(i=n+1;i<=100003;i++){
		flag=0;
		for(j=2;j*j<=i;j++)
			if(i%j==0){
				flag=1;break;
			}
		if(flag==0) return i;
	}
}