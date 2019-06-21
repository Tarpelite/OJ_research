#include <stdio.h>
#include <stdlib.h>


int main()
 {
 int i,j,n;
 scanf("%d",&n);
 for(i=n+1;i<100004;i++)
 	{   int m=0;
 		for(j=2;j<=i/2;j++)
 		{
 			if(i%j==0) m++;
		 }
		 if(m==0) {printf("%d",i);return 0;
		 }
		      }
	return 0;
}