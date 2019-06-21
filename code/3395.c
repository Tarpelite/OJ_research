#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	n++; 
	while(1)
	{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		break;
		
	}
	n++;
	if(n/i==1)
		break;
	} 
	printf("%d",n-1);
	return 0;
}