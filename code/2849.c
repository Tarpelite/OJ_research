#include<stdio.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)

int str[101];

long long fsum(long long l,long long r,long long n){
	int i;
	long long sum=0;
	for(i=l;i<=r;i++){
		sum+=str[i];
	}
	return sum%n;
}

long long fmul(long long l,long long r,long long n){
	int i;
	long long mul=1;
	for(i=l;i<=r;i++){
		mul*=str[i]%n;
		if(mul>200){
			mul%=n;
		}
	}
	return mul%n;
}

long long fplus(long long l,long long r){
	int i;
	long long plus=str[l];
	for(i=l+1;i<=r;i++){
		plus^=str[i];
	}
	return plus;
}
int main(){
	
	long long i,n,k,l,r,small,big,h,s,p;
	
	scanf("%lld%lld",&n,&k);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&str[i]);
		 
	}
	
	for(i=0;i<k;i++){
		
		scanf("%lld%lld",&l,&r);
		
		s=fsum(l,r,n);
		p=fmul(l,r,n);
		
		small=min(s,p);
		big=max(s,p);
		h=fplus(small,big);
		
		printf("%lld\n",h);
	}
	
	
}