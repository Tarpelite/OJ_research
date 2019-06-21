#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void *a,const void *b)
{
	return (*(int*)b)-(*(int*)a);
}

int main()
{
	int n;
	scanf("%d",&n);
	
	int number[n+1]; 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	int k;
	scanf("%d",&k);	

	qsort(number,n,sizeof(number[0]),compare);
	
//	for(int i=0;i<n;i++)
//		printf("%d ",number[i]);
//	printf("\n");			
		
	int j=0,cnt;
	int i=0;
	
	while(j!=k)
	{
	    cnt=1;
		while(number[i]==number[i+1])
		{
			cnt++;
			i++;
		}
		if(number[i]!=number[i+1])
			j++;
			i++;
	}
	
	printf("%d %d",number[i-1],cnt);
}