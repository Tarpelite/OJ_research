#include <stdio.h>
#include<math.h>
int M(int x)
{
	int i,j=0;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) j++; 
	}
	
	if(j==0) return 1;
	else return 0;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	int p=n+1;
	while(M(p)==0)
	{
		p++;
	}
	printf("%d",p);
 }