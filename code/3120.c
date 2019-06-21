#include <stdio.h>
int A[10000];
int N(int l,int r,int n)
{
	int sum=0;
	for(int i=l;i<=r;i++)
	{
		sum += A[i];
		if(sum>n) sum=sum%n; //在超过n之后马上求余，否则仍然无法排除爆内存的可能。 
	}
	sum = sum % n;
	return sum;
}
int M(int l,int r,int n)
{
	int rem = 1;
	for(int i=l;i<=r;i++)
	{
		rem = rem * A[i];
		if(rem>n) rem=rem%n;
	}
	rem = rem % n; 
	return rem;
}
int H(int l,int r)
{
	int res=A[l];
	for(int i=l+1;i<=r;i++)
	{
		res=res^A[i];
	}
	return res;
}
int main()
{
	int n,k,i,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		int Ni=N(l,r,n);
		int Mi=M(l,r,n);
		int min=(Ni>Mi?Mi:Ni);
		int max=(Ni>Mi?Ni:Mi);
		int result=H(min,max);
		printf("%d\n",result);
	}
	return 0;
 }