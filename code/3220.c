#include<stdio.h>
int main()
{   int a, i, j, m=0;
    scanf("%d",&a);
    m=a;
    for(i=a+1;;i++)
	{
        for(j=3;j<i;j++)
	    {
		    if(i%j==0)
			{
		        m++;
				break;
			}
		        
	    }
        if(m!=i)
            break;
    }
    printf("%d",i);
	return 0;
}