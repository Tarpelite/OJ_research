#include<stdio.h>
int zhishu(int a)
{
	int i;
	for(i=2;a%i!=0;i++){}
	if(a==i)
		return 1;
	else
		return 0;
}
int main()
{
	int n,i,a;
	scanf("%d",&n);
	for(i=n+1;;i++){
		a=zhishu(i);
		if(a==1)
			break;
	}
	printf("%d",i);
	return 0;
}