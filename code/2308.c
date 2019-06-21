#include<stdio.h>
int N(int n,int l,int r,int a[],int SIZE)
{
	int sum=0,i;
	for(i=l;i<=r;i++){
		sum=a[i]%n+sum;
		sum=sum%n;
	}
				
	return sum;
}
int M(int n,int l,int r,int a[],int SIZE)
{
	int mul=1,i;
	for(i=l;i<=r;i++){
		mul=mul*(a[i]%n);
		mul=mul%n;
	}
	
	return mul;
}
int H(int l,int r,int a[],int SIZE)
{
	int suma=0,i;
	for(i=l;i<=r;i++)
	suma=suma^a[i];
	return suma;
}
int max(int a,int b)
{
	if(a<=b) return b;
	else
	return a;
}
int min(int a,int b)
{
	if(b<=a) return b;
	else
    return a;
}
int main()
{
	int n,K;
	scanf("%d%d",&n,&K);
	int i;
	int l[n],r[n];
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int x1,x2;
	for(i=1;i<=K;i++)
	scanf("%d%d",&l[i],&r[i]);
	for(i=1;i<=K;i++){
	
		x1=N(n,l[i],r[i],a,n);
		x2=M(n,l[i],r[i],a,n);
		printf("%d\n",H(min(x1,x2),max(x1,x2),a,n));
	}
	
	return 0;
	
	
}