#include<stdio.h>
int f(int n)
{
	int i;
	i=n;
	do{
		i++;
	}while(zhishu(i));
	return i;
}
int zhishu(int n)
{
	int a;
	for(a=2;a<=n;a++){
		if(n%a==0)
			break;
	}
		
	
	if(a==n)
		return 0;
	if(a!=n)
		return 1; 
}
int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d",f(n));
	return 0;
}