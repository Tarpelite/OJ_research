#include<stdio.h>
int main()
{
	int m,n;
	int x;
	scanf("%d%d",&m,&n);
	x=n;
	int e=1;
	for(int i=0;i<x;i++){
		e=e*m;
		m--;
	}
	for(int o=0;o<x;o++){
		e=e/n;
		n--;
	}	
	printf("%d",e);
	return 0;
}