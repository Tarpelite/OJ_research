#include <stdio.h>
#include <stdlib.h>
long long int f(int t){
	if(t==1||t==0)
		return 1;
	else
		return t*f(t-1);
}

int main(){
	int m,n;
	long long int a;
	scanf("%d%d",&m,&n);
	if(m==0){
		printf("1");
	}
	else{
	a=f(m)/(f(n)*f(m-n));
	printf("%lld",a);
}
	return 0;
}