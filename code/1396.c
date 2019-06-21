#include<stdio.h>
int zhi(int);

int main()
{
	int n;
	scanf("%d",&n);
	if (zhi(n)==1)
	{
		int i;
	    for(i=n+1;;i++)
	    {
	        if(zhi(i)==1)
	        {
	    	    printf("%d",i);
	    	    break;
		    }
	    } 
	}
	
	return 0;
}

int zhi(int i)
{
	int j;
	for(j=2;j<=i;j++)
	{
		if (i%j==0)
		    break;
	}
	if (j==i)
	    return 1;
	else
	    return 0;
}