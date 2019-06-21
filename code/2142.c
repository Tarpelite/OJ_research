#include<stdio.h>

int fun(int m,int n)
{
	int i,a=1;
	if(n>m/2) n=m-n;
	for(i=0;i<n;i++)
	{
	    a=a*(m-i)/(i+1);
	 } 
	
	 return a;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",fun(m,n));
	return 0;
 }