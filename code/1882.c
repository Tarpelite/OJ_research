#include<stdio.h>
int main()
{
	int n,i,num;
	scanf("%d",&n);
	num=0;
	
	while(num!=2)
	{
	num=0;
	n=n+1;
	
	for(i=1;i<=n+1;i++)
	{
		if(n%i==0)
		num++;
	}
}
    printf("%d",n);
	
	return 0;
	
}