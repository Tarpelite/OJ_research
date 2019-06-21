#include<stdio.h>
int zhishu(int x){
	int i;
	for(i=2;i<x;i++)
		if(x%i==0)
		break;
	if(i==x){
		return 2;
	}
	else
		return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(zhishu(n+1)==1){
		n++;
	}
	if(zhishu(n+1)==2){
		printf("%d\n",n+1);
	}
	return 0;
}