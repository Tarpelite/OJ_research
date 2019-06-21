#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int a[100],b[100];

int fun1(int l,int r,int n)
{
	int i,sum=0;
	for(i=l;i<=r;i++){
		sum+=a[i];
	}
	return (sum%n);
}

int fun2(int l,int r,int n)
{
	int i;
	long long res=a[l]%n;
	for(i=l+1;i<=r;i++){
		res=(res*(a[i]%n))%n;
	}
	return (res%n);
}

int fun3(int l,int r)
{
	int i,res=a[l];
	for(i=l+1;i<=r;i++){
		res^=a[i];
	}
	return res;
}

int max(int a,int b)
{
	if(a>b) return a;
	else return b; 
}

int min(int a,int b) 
{
	if(a<b) return a;
	else return b;
}

int main()
{
	int n,k,i,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		b[i]=fun3(min(fun1(l,r,n),fun2(l,r,n)),max(fun1(l,r,n),fun2(l,r,n)));
		printf("%d\n",b[i]);
	}
	return 0;
}