#include <stdio.h>
int whether(int n);
int main() 
{
	int n;
	scanf("%d",&n);
	for(n+=1;;n++)
	{
		if (whether(n)==1)
		{
			printf("%d",n);
			break;
		}
	}
	return 0;
}
int whether(int n)
{
	int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		return 0;	
	} 
	return 1;
}