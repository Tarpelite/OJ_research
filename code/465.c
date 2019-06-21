#include<stdio.h>
int main ()
{
	int m,n,x=1;
	int i=1;
	scanf("%d%d",&m,&n);
	
	for(i=1;i<=n;i++){
	x=x*m/i;
		m--;
		
	}
	printf("%d",x);
	return 0;
}