#include<stdio.h>
int main()
{
	int i,j,x,a;
	scanf("%d",&x);
 for(i=x+1;1;i++)
	{   a=1;     
	   {
	   for(j=2;j<i;j++)
	   if(i%j==0)
	     a=0;
	   }
    if(a==1)
    break;
	}
	printf("%d",i);
	return 0;
	
 }