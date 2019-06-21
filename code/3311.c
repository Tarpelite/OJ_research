#include <stdio.h>
int main()
{
	int e,n,n1,p=0;
	scanf("%d",&n1);
	if(n1==1)
	{printf("2");}
	else
	
{
	n=n1+1;
	for(n=n1+1;n<1000000;n++)
	{
	   for(e=2;e<n;e++)
	  {
		
		if(n%e==0)
		break;
		if(e==n-1)
		p=1;
	  }
	  
	  if(p==1)
	  {
	  printf("%d",n);
	  break;}
    }
    return 0;}
}