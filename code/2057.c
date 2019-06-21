#include<stdio.h>
int N(int l,int r,int A[],int n)
{
	int answer;
	int sum=0;
	for(int i=l;i<=r;i++)
	{	
		sum=sum+(A[i]%n);	
		answer=sum%n;
	} 
//	printf("%d",sum);
//	printf("\n");

	
	return answer;
} 

int M(int l,int r,int A[],int n)
{
	if (l==r)
		return A[r]%n;
	
	return ((A[r]%n)*M(l,r-1,A,n))%n;
//	printf("%d",product);
//	printf("\n");

} 

int min(int a,int b)
{
	int minimal;
	if(a>b)
		minimal=b;
	else
		minimal=a;	
	return minimal;
}
 
int max(int a,int b)
{
	int maximum;
	if(a>b)
		maximum=a;
	else
		maximum=b;
	return maximum;
}

int H(int l,int r,int A[])
{
	int answer=0;
	for(int i=l;i<=r;i++)
		answer=answer^A[i];
	
//	printf("%d",answer);
//	printf("\n");	
//	
	return answer;
}

int main()
{
	int n,amount;
	scanf("%d %d",&n,&amount);
	
	int example[n];
	for(int j=0;j<n;j++)
		scanf("%d",&example[j]);
	
	int output[amount];
	int l,r;
	for(int m=0;m<amount;m++)
	{
		scanf("%d %d",&l,&r);
		output[m]=H(min(N(l,r,example,n),M(l,r,example,n)),max(N(l,r,example,n),M(l,r,example,n)),example);
	}
	
	for(int p=0;p<amount;p++)
	{
		printf("%d",output[p]);
		printf("\n");
	}
	
	return 0;
}