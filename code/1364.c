#include<stdio.h>
int N(int,int, int);
int M(int, int, int);
int H(int , int);

int A[101],n;
int main()
{
	int n,k,l,r,min,max,P,Q,ans[10000];
	scanf("%d%d",&n,&k);
	for( int i=0; i<n; i++)
	  scanf("%d",&A[i]);
	for(int i=0; i<k; i++){
	  scanf("%d %d",&l,&r);
	  P=N(l,r,n); Q=M(l,r,n);
	  if(P<Q)   ans[i]=H(P,Q);	
	  else  ans[i]=H(Q,P);}
	for(int i=0; i<k; i++)
	  printf("%d\n",ans[i]);
return 0;
 } 
 
 int N(int l,int r,int c)
 {
 	int s=0;
	for(int i=l; i<=r; i++ )
	s+=A[i];
	s%=c;
 	return s;
 }
 
int M(int l,int r,int c)
 {
 	long long k=1;
 	for(int i=l; i<=r; i++)
 	{k*=A[i];
 	k%=c;}
 	return k;
 }
 
 int H(int l, int r)
 {
 	int h=0;
 	for(int i=l ; i<=r; i++)
 	h^=A[i];
 	return h;
 }