#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	int i,j,k;
	scanf("%d",&n);
	for(i=n+1;i<100010;i++)
	{
		k=2;
		for(j=2;j<i;j++)
		{ 
		 if(i%j!=0)
		 {
		 	k++;
		 }
         if(i%j==0)
         break;
	    } 
	    if(k==i)
	    {
	     printf("%d",k);
	     i=100011;
		}
	}
	return 0;
}