#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int x;
	for(x=a,x<10000;x++;){
		int i;
		int isPrime=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			printf("%d",x);
			goto out;
		}
	}
	out:
		return 0;
}