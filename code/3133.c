#include <stdio.h>

int prime(int a){
	int i,ret=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}

int main ()
{	
	int n;
	scanf("%d",&n);
	int i=n+1;
	for(i=n+1;prime(i)==0;i++){
	}
	printf("%d",i);
		
	return 0;
}