#include <stdio.h>
int a[100000];
int N(int n,int l,int r)
{
	int i;
	int sum=0;
	for(i=l;i<=r;++i){
		sum+=a[i];
	}sum=sum%n;
	return sum;
}
int M(int n,int l,int r)
{
	int i;
	int sum=1;
	for(i=l;i<=r;++i){
		sum*=a[i];
               sum=sum%n;
	}
	return sum;
}
int H(int min,int max)
{
	int i;
	int temp=a[min];
	for(i=min+1;i<=max;++i){
		temp=temp^a[i];
	}return temp;
}
int main()
{
	int i,n,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	int l[1000],r[1000];
	for(i=0;i<k;++i){
		scanf("%d %d",&l[i],&r[i]);
	}int n_k[1000],m_k[1000];
	int min,max;
	for(i=0;i<k;++i){
		n_k[i]=N(n,l[i],r[i]);
		m_k[i]=M(n,l[i],r[i]);
		if(n_k[i]>m_k[i]){
			min=m_k[i];
			max=n_k[i];
			if(i<k-1)
				printf("%d \n",H(min,max));
			else
				printf("%d",H(min,max));
		}else{
			min=n_k[i];
			max=m_k[i];
			if(i<k-1)
				printf("%d \n",H(min,max));
			else
				printf("%d",H(min,max));
		}
	}return 0;
	
}