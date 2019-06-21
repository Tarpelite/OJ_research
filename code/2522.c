#include<stdio.h>
int test(int n);
int main()
{
	int n;
	scanf("%d",&n);
	n+=1;
	while(test(n)) n+=1;
	printf("%d",n);
	return 0;
}
int test(int n)
{
	int i,sum=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)sum+=1; 
	}
	if(sum==0)return 0;
	else return 1; 
}