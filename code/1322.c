#include<stdio.h>
int a[10000005];
void qsort(int a[],int left,int right);

int main()
{
	int n,k;
	int i,rang=1,cnt=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	qsort(a,0,n-1);
	for(i=n-1;i>=1;i--)
	{
		if(a[i]!=a[i-1])
		{
			if(rang==k)
			{
				printf("%d %d\n",a[i],cnt);
				return 0;
			}
			rang++;
			cnt=1;
		} else
		{
			cnt++;
		}
	}
	printf("%d %d",a[0],cnt);
}

void qsort(int a[],int left,int right)
{
	if(left>=right)
	{
		return;
	}
	int i=left,j=right;
	int key=a[left];
	
	while(i<j)
	{
		while(i<j&&key<=a[j])
		{
			j--;
		}
		a[i] = a[j];
		while(i<j&&key>=a[i])
		{
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;
	qsort(a,left,i-1);
	qsort(a,i+1,right);
}