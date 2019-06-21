#include<stdio.h>
int Z(int x);

int main()
{
	int m,n;
	scanf("%d",&m);
	for(n=m+1; 1 ;n++ )
	{if(Z(n)) break;}
	printf("%d",n);
	return 0;}
	
	int Z(int x){
	if(x==1) return 0;
	else {
		for(int i=2; x%i!=0; i++)
		  {if(i==x-1) return 1;}
	return 0;
	}
}