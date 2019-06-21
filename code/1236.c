#include<stdio.h>
int main()
{
	int n,m,i,j,x;
	scanf("%d",&n);
	
	for(i=n+1;i<=200000;i++)
	{
	    x=0;
	    for(j=1;j<=i;j++)
		{
	        {
	    	if(i%j==0)
	    	    x=x+1;
	        }
	    }
				
		if(x==2)
		{
			printf("%d\n",i);break;
		}    
    }
	
	return 0;
 }