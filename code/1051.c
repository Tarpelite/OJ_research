#include<stdio.h>
int primeNumber(int);
int main(){
	int n,y,i;
	scanf("%d",&n);
	for(y=n+1;;y++)
	{
		if(primeNumber(y)==0)
			continue;
		else
			break;
	}
	printf("%d",y);
	return 0;
}
int primeNumber(int y){
	int j;
	for(j=y-1;j>1;j--)
	{
		if(y%j==0)
			break;
		else
			continue;
	}
	if(j==1)
		return 1;
	else
		return 0;
}