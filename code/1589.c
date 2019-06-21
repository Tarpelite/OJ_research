#include<stdio.h>
int a[105];
int mMin(int a,int b){
	if(a>b)
	return b;
	else
	return a;
}
int mMax(int a,int b){
	if(a<b)
	return b;
	else
	return a;
}


int na(int l,int r,int n){
	int i,result,sum=0;
	for(i=l;i<=r;i++)
	sum+=a[i];
	return sum%n;
	
} 

int ma(int l,int r,int n){
	int i,result,sum=1;
	for(i=l;i<=r;i++)
	{
	
	sum*=a[i];
	sum=sum%n;
	}
	return sum;
	
} 

int ha(int l,int r){
	int i,result=0;
	for(i=l;i<=r;i++){
	
result=result^a[i];}
	return result;
	
} 

int main(){
	
	int K,n,N,i,l,r,min,max,sss;

	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	N=K;
	while(N--)
	{
	scanf("%d%d",&l,&r);
	min=mMin(na(l,r,n),ma(l,r,n));
	
	max=mMax(na(l,r,n),ma(l,r,n));
	sss=ha(min,max);
	printf("%d\n",sss);
	}
	return 0;
	
}