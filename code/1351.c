#include<stdio.h>
int a[10000005];
void qsort(int *a,int low,int high);
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	qsort(a,0,n-1);
	j=1;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>a[i-1])
		{
			j++;
		}
		if(j==k)
		{
			k=i-1;
			break;
		}
	}
	j=1;
	for(i=k;i>0;i--)
	{
		if(a[i-1]==a[i])
		j++;
		else
		break;
	}
	printf("%d %d",a[k],j);
}
void qsort(int *a,int low,int high)
{	int temp; 
	int i=low;
	int j=high;
	int key=a[low];
	if(low>=high)
	{
		return ;
	}
	while(low<high)
	{
		while(low<high&&key<=a[high])
		{
			--high;
		}
		if(key>a[high])
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			++low;
		}
		while(low<high&&key>=a[low])
		{
			++low;
		}
		if(key<a[low])
		{
			temp=a[low];
			a[low]=a[high];
			a[high]=temp;
			--high;
		}
	}
	qsort(a,i,low-1);
	qsort(a,low+1,j);
}