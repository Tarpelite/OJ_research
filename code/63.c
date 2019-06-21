#include<stdio.h>
#include<math.h>
int N(int a[],int n,int l,int r);
int M(int a[],int n,int l,int r);
int H(int a[],int n,int l,int r);
int max(int a,int b);
int min(int a,int b);
int main()
{
	int n,k,a[100]={0};
	int l,r,m1,m2,sum1,sum2,sum;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(;k>0;k--) 
	{
		scanf("%d%d",&l,&r);
		m1=N(a,n,l,r);
		m2=M(a,n,l,r);
		sum1=min(m1,m2);
		sum2=max(m1,m2);
		sum=H(a,n,sum1,sum2);
		printf("%d\n",sum);
	}
	return 0;
 } 
 int N(int a[],int n,int l,int r)
 {
 	int sum=0;
 	for(int i=l;i<r+1;i++)
 		sum+=a[i];
 	sum=sum%n;
 	return sum;
 }
 int M(int a[],int n,int l,int r)
 {
 	int sum=1;
 	for(int i=l;i<r+1;i++)
 		{
		 	sum*=a[i];
		 	sum%=n;
		 }
 	return sum;
 }
 int H(int a[],int n,int l,int r)
 {
 	int sum=a[l];
 	for(int i=l+1;i<r+1;i++)
 		sum^=a[i];
 	return sum;
 }
 int max(int a,int b)
 {
 	int max;
 	if(a>b)
 		max=a;
	else
		max=b;
	return max; 	
 }
 int min(int a,int b)
 {
 	int min;
 	if(a<b)
 		min=a;
	else
		min=b;
	return min; 	
 }