#include<stdio.h>
#include<math.h>
int isprime(int i); 
int main()
{
	int i,n;
	scanf("%d",&n); 
	for(i=n+1;;i++){
		if(isprime(i)){
			printf("%d",i);
			break;
		} 
	} 
}
int isprime(int i){
	for(int j=2;j<=sqrt(i);j++){
		if(i%j==0) return 0;
	}
	return 1;
}