#include <stdio.h>
int zs(int x)
{
	int flag;
	for(int i=2;i<x;i++){
		
		flag=x%i;
		if(flag==0){
		
			break;
		}
	}
	if(flag==0){
		return 0;
	}
	else return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=n+1;i<1000000000;i++){
		if(zs(i)==1){
			printf("%d",i);
			break;
		}
	
	}
	return 0;
}