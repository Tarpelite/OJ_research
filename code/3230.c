#include<stdio.h>
int main()
{
	int n,m,i,a;
	scanf("%d",&n);
	m=n+1;
	while(m<100004)
	{
		i=2;		
		while(i<=m)
		{
			if(m%i==0)
			{
			    a=i;
			    break;
		    }
			else
			{
			    a=i;
			    i++;
		    }
		}
		if(a==m)
		{
		    printf("%d\n",m);
		    break;
	    }
		else
		m++;
	}
}