#include <stdio.h>
#include <math.h>
long long int fact(int m);
int main (){
	int m,n;
	scanf("%d %d",&m,&n);
	long long int k;
	k = fact(m)/(fact(n)*fact(m-n));
	printf("%d",k);
	
	
	
	
	
	
	
	
	
	return 0;
} 
long long int fact(int m){
	long long int ret = 1;
	int i;
	for (i=m;i>0;i--){
		ret *= i;
	}
	return ret;
	
}