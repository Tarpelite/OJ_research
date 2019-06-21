#include<stdio.h>
#include<stdlib.h>
int cmp ( const void *a , const void *b )

{ return *(int *)a - *(int *)b; }
int main()
{
	int a[1000000],b=1,i,n,max,k,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 qsort(a,n,sizeof(a[0]),cmp);
	scanf("%d",&k);
	for(i=n-1;i>=1;i--)
	{
		if(a[i]<a[i+1]) b++;
		if(b==k) break;
	}
	if(b==k) printf("%d ",a[i]);
	max=a[i];
	for(i=1;i<=n;i++)
	{
		if(a[i]==max) s++;
	}
	printf("%d",s);
	 return 0;
}