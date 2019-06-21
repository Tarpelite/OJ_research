#include<stdio.h>
int a[101];
int max(int a, int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int min(int a, int b)
{
	if(a<=b)
		return a;
 
		return b;
}
int N(int l, int r, int n)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
		sum=(sum+a[i])%n;
	return sum;
}
int M(int l, int r, int n)
{
	int ans=1,i;
	for(i=l;i<=r;i++)
		ans=(ans*a[i])%n;
	return ans;
}
int H(int l, int r)
{
	int ans=0,i;
	for(i=l;i<=r;i++)
		ans=ans^a[i];
	return ans;
}
int main()
{
	int n,k,i,j,l,r,ans[101],m;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<k;j++){
		scanf("%d%d",&l,&r);
		ans[j]=H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n)));
	}
	for(m=0;m<k;m++)
		printf("%d\n",ans[m]);
	return 0;
}