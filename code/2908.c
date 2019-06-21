#include<stdio.h>
long long jie(long long);
int main(){
	long long m,n,x,y,z;
	scanf("%lld%lld",&m,&n);
	if(m==n)
	printf("1");
	else{
	x=jie(m),y=jie(n),z=jie(m-n);
	printf("%lld",x/(y*z));
	}
	return 0;
}
long long jie(long long a){
	long long sum=1,i;
	for(i=a;i>0;i--)
	sum=sum*i;
	return sum;
}