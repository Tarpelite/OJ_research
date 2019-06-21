#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k;
	int flag=1;
	scanf("%d",&n);
	if(n==1)printf("2");
	else
	{
	for(i=n+1;i<=100003;i++)
	{
		flag=1; 
		for(k=2;k<=sqrt(i);k++)
		{
			if(i%k==0)flag=0;
		}
		if(flag==1)
		{
			printf("%d",i);
			break;
		}	
	}}
	return 0;	
}