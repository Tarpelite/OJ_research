#include<stdio.h>
#include<math.h>
int f(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
 } 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	while(!f(++n));
 	printf("%d",n);
 	return 0;
 	
 }