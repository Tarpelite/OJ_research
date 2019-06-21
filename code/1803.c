#include <stdio.h>
#include <math.h>

int N(int,int);
int M(int,int);
int H(int,int);
int min(int,int);
int max(int,int);
int n,A[100]={0};

int N(int a,int b)
 {
 	int i,num=0;
 	for(i=a;i<=b;i++)
 	 		num+=A[i];
 	 		return num%n;
	 }
	 
int M(int a,int b)
 {
 	int i,num=1;
 	for(i=a;i<=b;i++){
 			num*=A[i];
 			while(num>n)
			 num-=n; 
	 }
 	 	
 	 		return num%n;
	 }
	 
int H(int a,int b)
 {
 	int i,num=0;
 	for(i=a;i<=b;i++)
 	 		num=num^A[i];
 	 		return num;
	 }
	 
int max(int a,int b)
{
	if(a>=b) return a;
	else return b;
}

int min(int a,int b)
{
	if(a<=b) return a;
	else return b;
}


int main()
{
	int i,j;
	int K;
	int b[100]={0};
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(j=0;j<K;j++)
	{
	 	int l,r;
	 	int x,y;
	 	scanf("%d%d",&l,&r);
	 	x=min(N(l,r),M(l,r));
	 	y=max(N(l,r),M(l,r));
	
	 	b[j]= H(x,y);
	}
j=0;
while(j<K)
{
	printf("%d\n",b[j]);
	j++;
	}	
	
	
	return 0;
 }