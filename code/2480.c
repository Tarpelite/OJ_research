#include<stdio.h>
int zhishu(int n){
int count=1,isprime=1;
	for(count=2;count<n;count++){
		if(n%count==0){
			isprime=0;
			break;
		}
	}
	return isprime;
} 
int main()
{
	int m;
	scanf("%d",&m);
	do{
		m++;
		zhishu(m);
	
	}while(zhishu(m)==0);
	printf("%d",m);
	return 0;
	 
}