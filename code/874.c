#include <stdio.h>
#include <math.h>
int a[10000001]={0};
int main ()
{
	int i=0,n=0,k=0,num=0,l=0;
	scanf ("%d",&n); 
	for (i=0;i<=n-1;i++)
		{
			scanf ("%d",&num);
			a[num]=a[num]+1; 
		 } 
	scanf ("%d",&k);
	for (i=10000000;i>=0;i--)
		{
			if (a[i]!=0)
				l=l+1;
			if (l==k)
				{
					printf ("%d %d",i,a[i]);
					break ; 
				 } 
		 } 
	return 0; 
 }