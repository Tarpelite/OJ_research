#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
		int a,b,c=1,i=1;
	
	scanf("%d %d",&a,&b);
	
    while(i<=b)
    {
	c=c*a;
    a=a-1;
    i++;
}
i=1;
    while(i<=b)
    {
    	c=c/b;
    	b=b-1;
    
    	
	}
	printf("%d",c);
	return 0;
}