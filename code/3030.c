#include<stdio.h>
#include<math.h>
int arr[10005],r[105],l[105];
int sum(int r,int l,int n);
int mul(int arr[],int r,int l,int n);
int poo(int arr[],int r,int l);
int min(int a,int b);
int max(int a,int b);
int main()
{
	int n,k,i,j,x,y,p,q;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	for(i=0;i<k;i++) scanf("%d %d",&l[i],&r[i]);
    for(i=0;i<k;i++){
    	p=l[i];
    	q=r[i];
    	x=sum(q,p,n);
    	y=mul(arr,q,p,n);
    	p=min(x,y);
    	q=max(x,y);
    	x=poo(arr,q,p);
    	printf("%d\n",x);
	}
	return 0;
}
int sum(int r,int l,int n)
{
	int i,a=0;
	for(i=l;i<=r;i++){
		a+=arr[i];
		a=a%n;
	}
	return a;
}
int mul(int arr[],int r,int l,int n)
{
	int i,a=1;
	for(i=l;i<=r;i++){
		a*=arr[i];
		a=a%n;
	}
	return a;
}
int poo(int arr[],int r,int l)
{
	int i,a[10005];
	for(i=l;i<=r;i++) a[i]=arr[i];
	for(i=r-1;i>=l;i--){
         a[i]=a[i]^a[i+1];
	}
	return a[l];
}
int min(int a,int b)
{
	if(a<=b) return a;
	else return b;
}
int max(int a,int b)
{
	if(a<=b) return b;
	else return a;
}