#include <stdio.h>
#include <math.h>
int isprime(int x);
int search(int a[],int key);
int main (){
	int i = 0;
	int n;
	scanf("%d",&n);
	for(i = n+1;;i++){
		if (isprime(i)==1){
			printf("%d",i);
			break;
		}
	} 
	

	
	return 0;
} 
int isprime(int x){
	int i;
	int ret=1;
	for (i=2;i<=sqrt(x);i++){
		
		if (x%i==0){
			ret = 0;
			break;
		}
		}
		return ret;
	}