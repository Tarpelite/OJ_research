#include<stdio.h>
int main()
{
	int n,i,j=2,d=0,m=1;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i){
		
		printf("%d",i);
		break;
	}
	    
	}
	
	return 0;
}