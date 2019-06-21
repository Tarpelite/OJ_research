#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (a>b? a=b) 
int com (const void*a, const void*b);
int a[10000000]={0};
int number(int x,int a[],int length);
int number(int x,int a[],int length)
{
	for(int i=0;i<length;)
	{
		if(a[x]==a[x-i])
			i++;
		else
			return i;
	}
}
int com (const void*a, const void*b)
{
	return*(int*)a>*(int*)b;
}
int main()
{
	int n,i,k,j;
	int num,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	qsort(a,n,sizeof(int),com);
	for(i=0;i<k;i++)
	{
		t+=number(n-t,a,n);
	}
		num=number(n-t,a,n);
		printf("%d %d",a[n-t],num);
	
	return 0;
	}