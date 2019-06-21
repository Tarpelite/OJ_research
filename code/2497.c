#include<stdio.h>
int zhishu(int n)
{
	int m,a=1,b=0;
	m=n/2;
	while(n%m!=0){
		m--;
	}
	if(m==1){
		return a;
	}
	else{
	    return b;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	n=n+1;
	while(zhishu(n)!=1){
		n++;
	}
	printf("%d",n);
	return 0;
 }