#include<stdio.h>

long long fac(int a,int b){
	int i;
	long long res=1;
	
	for(i=a-b;i>1;i--){
		res=res*i;
		
	}
	return res;
} 



int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	if (n==0||m==0){
		printf("0");
	}
	
	else{
		long long res;
	
		long long up=fac(n,0);
		long long down=fac(n,m)*fac(m,0);
		
		res=up/down;
		
		printf("%lld\n",res);	
	}
	

	return 0;
}