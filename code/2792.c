#include<stdio.h>
int main()
{
	int n,m,a,i,b;
	scanf("%d",&n);
	m=n+1;
	while(m<2*n)
	{
		b=0;
		for(i=2;i<m;i++)
	   {
	   	a=m%i;
		if(a==0)
		{
		b++;	
		}
	   }
	   if(b==0)
		{
		printf("%d",m);
		break;	
		}
		else
		 m++;
	}
	
  return 0;
}