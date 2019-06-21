#include <stdio.h>
#include <math.h>
int ifzs(int);

int main()
{
	int n;
	int i;
	scanf("%d", &n); 
	for(i=n+1;i>0;i++)
	{
		if(ifzs(i)==1)   break;
	}
	
	printf("%d", i);
} 

int ifzs(int x)
{
	int y;
	int i, tmp=0;
	y=sqrt(x);
	for(i=2;i<=y;i++)                 //<=
	{
		if(x%i==0)     tmp++; 
	}
	
	if(tmp==0)    return 1;
	return 0;
}