#include <stdio.h>
long long N(int,int,long long[],int);
long long M(int,int,long long[],int);
long long H(int,int,long long[],int);
int main()
{
	int n,k,j=0,m=0,i=0,l,r;
	long long A[100]={},max,min,b[100]={};
	scanf("%d%d",&n,&k);
	
	for(;i<n;i++)
	    scanf("%lld",&A[i]);
	
	for(;j<k;j++){
		scanf("%d%d",&l,&r);
		
		if(N(l,r,A,n)<M(l,r,A,n)){
			max=M(l,r,A,n);
			min=N(l,r,A,n); 
		}
		else{
			max=N(l,r,A,n);
			min=M(l,r,A,n);
		}
		
		b[j]=H(min,max,A,n);
	} 
	
	for(;m<k;m++)
	    printf("%lld\n",b[m]);
	
	return 0;
 } 
 
 long long N(int l,int r,long long A[],int n)
 {
 	long long sum=0,Sum;
 	int i;
 	for(i=l;i<=r;i++)
 	    sum+=A[i];
 	    Sum=sum%n;
 	return Sum;
 }
 
 long long M(int l,int r,long long A[],int n)
 {
 	long long multi=1;
 	int i;
 	for(i=l;i<=r;i++){ 
	    multi*=(A[i]%n);
 	    multi=multi%n;
	 } 
 	   
 	return multi;
  } 
  
  long long H(int l,int r,long long A[],int n)
  {
  	long long qita=A[l];
  	int i=l+1;
  	for(;i<=r;i++)
       qita=qita^A[i];
	return qita;  	
  }