#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100020],b[10000];
	int i,j,k=0,n;
	for(i=0;i<=100020;i++)
	a[i]=i;
	a[1]=0;
	for(i=2;i<=1000;i++)
	{
		if(a[i])
		{
			for(j=2;i*j<=100020;j++)
			a[i*j]=0;
		}
	}
	for(i=2;i<=100020;i++)
	{
		if(a[i]!=0)
		{
			k++;
			b[k]=a[i];
		}
	}
	scanf("%d",&n);
	for(i=1;i<=10000;i++)
	{
		if(b[i]<=n && n<b[i+1])
		{
			printf("%d",b[i+1]);
			break;
		}
	}
	return 0;
}