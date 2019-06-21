#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{   
	    int j=2;
		while(i%j!=0&&j<i)
		{
			j++;
		}
		if(j==i) break;
	}
	printf("%d",i);
	return 0;
 }