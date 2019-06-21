#include <stdio.h>
#include <math.h>
#include <string.h>
int combination (int a,int b)
{
	int i=0,num=1; 
	if (b==0)
		return 0;
	else
	{
		for (i=0;i<=b-1;i++)
		{
			num=num*(a-i); 
		 } 
	for (i=1;i<=b;i++)
		{
			num=num/i; 
		 } 
	return num; 
	 } 
    
 } 
int main ()
{
	int m=0,n=0,i=0;
	scanf ("%d%d",&m,&n);
	m=combination(m,n);
	printf ("%d",m);
	return 0; 
 }