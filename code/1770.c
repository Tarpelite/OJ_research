#include<stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
	return ( *(int*)b - *(int*)a );
}

int main()
{
	int n,i,j=0,temp=0,x,num=1;
	scanf("%d",&n);
	int in[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&in[i]);
	}
	scanf("%d",&x);
	qsort(in,n,sizeof(int),compare);
	
//	for(i=0;i<n;i++)
//		printf("%d ",in[i]);
//	printf("\n");
	
	for(i=0;i<n;i++)
	{
		if(in[i]!=in[i+1])
			j++;
		if(j==x-1)
			break;
	}
//	printf("%d\n",i);
	i++;
	while(1)
	{
		if(in[i]==in[i+1])
		{
			num++;
			i++;
		}
		else
			break;
	}
	printf("%d %d",in[i],num);
	return 0;
}