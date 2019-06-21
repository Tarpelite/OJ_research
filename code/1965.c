#include<stdio.h>
int N(int l,int r,int a[105],int n)
{
	int Nn=0,i;
	for(i=l;i<=r;i++) Nn=(Nn%n)+(a[i]%n);
	return Nn%n; 
}
int M(int l,int r,int a[105],int n)
{
	int Mn=1,i;
	for(i=l;i<=r;i++) Mn=(Mn%n)*(a[i]%n);
	return Mn%n; 
}
int H(int l,int r,int a[105],int n)
{
	int Hn=a[l],i;
	for(i=l+1;i<=r;i++) Hn^=a[i];
	return Hn; 
}

int main()
{
	int n,k,a[105],l[105],r[105],i,da;
	int min, max,Nn,Mn;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<k;i++) scanf("%d%d",&l[i],&r[i]);
	for(i=0;i<k-1;i++)
	{
		Nn=N(l[i],r[i],a,n);
		Mn=M(l[i],r[i],a,n);
		min=(Nn>Mn)?Mn:Nn;
		max=(Nn>Mn)?Nn:Mn;
		da=H(min,max,a,n);
		printf("%d\n",da);
	}
	Nn=N(l[i],r[i],a,n);
	Mn=M(l[i],r[i],a,n);
	min=(Nn>Mn)?Mn:Nn;	
	max=(Nn>Mn)?Nn:Mn;
	da=H(min,max,a,n);
	printf("%d",da);
	return 0;
}