#include<stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
int N(int,int);
int M(int,int);
int H(int,int);

int n,k,a[101],j;
int main(){
	int i,l,r;	
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){scanf("%d",&a[i]);}
	
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
	}
	return 0;
}

//三个函数//
int N(int l,int r)
{
	int sum=0;
	for(j=l;j<=r;j++)
	{
		sum+=a[j];
		sum=sum%n;
	}
	return sum;
}

int M(int l,int r)
{	
	int mid,sum=1;
	for(j=l;j<=r;j++)
	{
		sum*=a[j];
		sum=sum%n;
	}
	return sum;
}

int H(int l,int r)
{
	int sum=a[l];
	for(j=l;j<r;j++)
	{
		sum=sum^a[j+1];
	}
	return sum;
}