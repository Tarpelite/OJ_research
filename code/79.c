#include<stdio.h>
#include<stdlib.h>
int a[10000000];
int compare(const void * a,const void * b)
{
	return (*(int*)b - *(int*)a);
}
int main()
{
	int n;
	int i,j,k;
	int num = 1;
	
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	   scanf("%d",a + i);
	scanf("%d",&k);
	qsort(a,n,sizeof(int),compare);
	for(i = 0,j = 0;i < n;i++)
	{
		if(i > 0&&a[i]==a[i-1]&&j!=k)
		   continue;
		   j++;
		   if(j==k)
		   {
		   	for(num = 1;(i + num)<n&&a[i]==a[i + num];num++);num+
			   printf("%d %d",a[i],num);
		   	
		   	return 0;
		   }
	}
}