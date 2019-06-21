#include<stdio.h>
int f(int x)
{	int k;
	for( k=x-1;k>0;k--)
		if(x%k==0)
			break;
	if(k==1)
		return 1;
	else 
		return 0;	
}
int main()
{   	
	 int n,i;
	 scanf("%d",&n);
	for(i=n+1;i<100100;i++)
		if(f(i)==1)
		{
			printf("%d",i); 
			break;
		}
	return 0;
}