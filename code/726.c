#include<stdio.h>
long long H(long long,long long);
long long a[101],l[101],r[101];
int main(){
	int n,k,i,j,x;
	long long N[101]={0},M[101]={0},K[101];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<k;i++)
		scanf("%lld%lld",&l[i],&r[i]);
	for(i=0;i<k;i++)
	{
		M[i]=1;
		for(j=l[i];j<=r[i];j++)
		{
			N[i]+=a[j];
			M[i]=(M[i]%n)*a[j]; 
		}
		N[i]=N[i]%n;
		M[i]=M[i]%n;
		if(N[i]>=M[i])
			K[i]=H(M[i],N[i]);
		else
			K[i]=H(N[i],M[i]);
	}
	for(i=0;i<k;i++)
		printf("%lld\n",K[i]);
	return 0;	
} 
long long H(long long min,long long max){
	int i;
	long long mid=a[min];
	for(i=min;i<max;i++)
		mid=mid^a[i+1];
	return mid;
}