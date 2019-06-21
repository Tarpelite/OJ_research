#include<stdio.h>
int N(int l,int r,int n,int a[]){
      int m=0,i; 
	  for(i=l;i<=r;i++)
      {
      	m=a[i]%n+m;
      	m=m%n;
	  }
	  return m;
}
int M(int l,int r,int n,int a[]){
	int t=1;
	for(l;l<=r;l++)
	{
		t=t*(a[l]%n);
		t=t%n;	}
	return t;
}
int H(int l,int r,int a[],int n){
	int m=0;
	for(l;l<=r;l++)
	{
		m=m^a[l];
	}
	return m;
}

int min(int a,int b){
	if(a<=b)
	return a;
	else 
	return b;
}
int max(int a,int b){
	if(a<=b)
	return b;
	else
	return a;
}
int main()
{
	int n,K;
	scanf("%d %d",&n,&K);
	int l[n],r[n];
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int p=1;p<=K;p++)
	{
		scanf("%d %d",&l[p],&r[p]);}
	for(int p=1;p<=K;p++){
		int n1=N(l[p],r[p],n,a),n2=M(l[p],r[p],n,a);
		printf("%d\n",H(min(n1,n2),max(n1,n2),a,n));
	}
	return 0;
}