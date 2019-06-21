#include<stdio.h>
int main()
{
	int m,n,a,b,c,d,e;
	long long m1=1,n1=1,mn1=1;
	scanf("%d %d",&m,&n);
	e=m-n;
	if(n==0)
	{
		d=0;
		printf("%d",d);
	}
	else{

	for(a=1;a<m;a++)
	{
		m1=m1*(a+1);
		
	}
	for(b=1;b<n;b++)
	{
		n1=n1*(b+1);
		
	}
	for(c=1;c<e;c++)
	{
		mn1=mn1*(c+1);
	
	}
	
	d=m1/(n1*mn1);
	printf("%d",d);
		}
	return 0;
}