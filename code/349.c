#include<stdio.h>
#include<math.h> 
int max(int a,int b)
{
	int max;
	if(a>b) max=a;
	else max=b;
	return max;
}
int min(int i,int j)
{
	int min;
	if(i<j) min=i;
	else min=j;
	return min;
}
int Nlr(int a[],int n,int l,int b)
{
	int i,p,m=0;
	for(i=l;i<=b;i++){
		m=m+a[i]; 
	}
	p=m%n;
	return p;
}
int Mlr(int a[],int n,int l,int b)
{
	int i,p,m=1;
	for(i=l;i<=b;i++){
		m=m*a[i];
		m=m%n;
	}
	p=m;
	return p;
}
int Hlr(int a[],int l,int b)
{
	int i,p;
	for(i=l+1,p=a[l];i<=b;i++){
		p=p^a[i];
	}
	return p;
}
int main()
{
	int n,k,i;
	int a[10000],l[10000],r[10000],N[10000],M[10000],Min[10000],Max[10000],H[10000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	    scanf("%d%d",&l[i],&r[i]);
    for(i=0;i<k;i++){
		N[i]=Nlr(a,n,l[i],r[i]);
        M[i]=Mlr(a,n,l[i],r[i]);
        Min[i]=min(N[i],M[i]);
        Max[i]=max(N[i],M[i]);
        H[i]=Hlr(a,Min[i],Max[i]);
        printf("%d\n",H[i]);		
	}
	return 0;
}