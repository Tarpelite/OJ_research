#include<stdio.h>
int a[10000000]={0};
int main()
{
	int i=0,j=0,n,k,num,max=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&num);
		if(num>max)
			max=num;
		a[num]+=1;
		i++;
	}
	scanf("%d",&k);
	for(i=max;i>0;i--)
	{
		if(j==k)
		{
			printf("%d %d",i+1,a[i+1]);
			break;
		} 	
		if(a[i]==0)
			continue;
		else
			j++;
	}
	return 0;
 }