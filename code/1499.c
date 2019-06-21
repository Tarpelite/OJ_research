#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{ 
	int m,n,i,s=1;
	scanf("%d%d",&m,&n);
	for(i=0;i<n;i++)
	    s=s*(m-i)/(1+i);
	printf("%d",s);
	return 0;
}