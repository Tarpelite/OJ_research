#include <stdio.h>
#include <math.h>
#include <string.h>
int prime(int a)
{
	int i=0,l=0,k=0;
	for (i=1;i<=a-1;i++)
		{
			k=a%i;
			if (k==0)
				l=l+1; 
		 } 
	if (l==1)
		return 1;
	else 
		return 0; 
 } 
int main ()
{int num=0;
 scanf ("%d",&num); 
 while (1)
 {num=num+1;
 if (prime(num)==1) 
  break ;}
  printf ("%d",num);
  return 0; 
 }