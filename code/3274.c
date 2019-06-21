#include<stdio.h>

int main(){
	

	int m, n, i, sum=1;
	
	scanf("%d%d", &m, &n);
	
	if(m==0 || n==0) printf("0");
	else{
	
	for(i=m;i>=m-n+1;i--) sum = sum*i;
	for(i=1;i<=n;i++) sum = sum/i;
	
	printf("%d", sum);}
	
	return 0;
}