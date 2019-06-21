#include<stdio.h>
int main()
{
	long n,i,k,l=0,max=0;
	int a[200000]={0};
	int b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		a[b]++;
		if(b>max) max=b;
	}
	scanf("%d",&k);
	for(i=max;i>0;i--)
	{
		if(a[i]!=0) l++;
		if(l==k) {printf("%d %d",i,a[i]);break;}
	}
	return 0;
}