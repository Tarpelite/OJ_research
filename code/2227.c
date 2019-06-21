#include <stdio.h>
int main(){
	int n,m,i;
	long long s=1,x=1,a;
	scanf("%d%d",&m,&n);
	if(m==0||n==0)
	printf("0");
	else{
		for(i=m;i>n;i--){
		s=s*i;
	}
	for(i=m-n;i>0;i--){
		x=x*i;
	}
	a=s/x;
	printf("%lld",a);
	}
	
	return 0;
	}