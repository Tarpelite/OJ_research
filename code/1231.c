#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n,k,i,a;
	int max=0,min=100000;
	int num[100000]={};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(max<a)
		    max=a;
		if(min>a)
		    min=a;
		num[a]++;
	}
	
	scanf("%d",&k);
	for(i=max;i>=min;i--)
	{
		if(num[i]!=0)
		    k--;
		if(k==0)
		    break;
	}
	printf("%d %d",i,num[i]);
	return 0;

}