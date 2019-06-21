#include<stdio.h>

int getmax(int a[],int n)
{
	int max = a[0],i;
	
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
		
			max = a[i];
	}
	return max;
}
void BucketSort(int a[],int n)
{
	int r = getmax(a,n)+1;
	
	int t[r];
	
	int i,j;
	
	for(i=0;i<r;i++) t[i] = 0;

	for(i=0;i<n;i++)
	
		t[a[i]]++;
		
	for(i=0,j=0;i<r;i++)
	{
		while(t[i]!=0)
		{
			a[j] = i;
			
			j++;
			
			t[i]--;
		}
	}
	return;
}
int main()
{
	int n,k,a[100000]={0},b,c[100000]={0},i,m;
	
	scanf("%d",&n);
	
	for(i=0,m=0;i<n;i++)
	{
		scanf("%d",&b);
		
		c[b]++;
		
		if(c[b]==1){
		
			a[m] = b;
			
			m++;
		}
	}
	scanf("%d",&k);
	
	BucketSort(a,m);

	printf("%d %d",a[m-k],c[a[m-k]]);
	
	return 0;
}