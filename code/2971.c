#include<stdio.h>
int main()
{
	int n,i,a,b=1,c;
	scanf("%d",&n);
	if(n<1||n>100000)
	{
		return 0;
	}
	
		for(c=1+n;c>n;c++)
		{
			b=1;
			for(i=1;i<c;i++)
		    {
			     a=c%i;
		      if(a==0)
		      {
			      b++;
		      }
		    }
		    if(b==2)
	        {
	    	    printf("%d",c);
	    	    break;
	        }
	    }
	   

	return 0;

}