#include<stdio.h>
#include<stdlib.h>
int a[10000001]={0};
int comp(const void *a,const void *b)
{
	return *(int *)b-*(int *)a;
}
int main()
{
	int n;
	int k;
	int i=0;
	int j=1;
	int m=0;
	int l=1;
	scanf(" %d",&n);
	while(i<n)
	{
		scanf(" %d",&a[i]);
		i++;
	}
	scanf("%d",&k);
	qsort(a,n,sizeof(a[0]),comp);
	i=1;
	if(k==1)
	{
		printf("%d ",a[0]);
		while(a[m]==a[m+1])
	   {
	   	  l++;
	   	  m++;
	   }
	   printf("%d",l);
	
	}
	else
	{
		while(j<k)
	   {
		   if(a[i]!=a[i-1])
		   {
		   	    j++;
		   }
		   i++;
	   }
	   printf("%d ",a[i-1]);
	   m=i-1;
	   while(a[m]==a[m+1])
	   {
	   	  l++;
	   	  m++;
	   }
	   printf("%d",l);
	}
	
	return 0;
}