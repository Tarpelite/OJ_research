#include<stdio.h>

int main()
{
    int n,m,tag=0,i;
    scanf("%d",&n);
    m=n+1;
    while(tag!=1)
    {
    	tag=0;
    	for(i=1;i<m;i++)
    	{
    		if(m%i==0)
    		{
    			tag++;
			}
		}
		if(tag==1)
		{
			printf("%d",m);
		}
		m++;
	}
	
	return 0;
}