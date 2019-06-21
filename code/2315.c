#include<stdio.h>
int f(long long int n){
	long long int i,c=0,a;
for(i=2;i<n;i++)
		{
		if(n%i==0)
	c++;
	
	}
	    if(c==0)
	a=1;
		else 
	a=0;
return a;
}
int main(){
	long long int n,i,a,c;
	scanf("%lld",&n);
	for(i=n+1;i<100100;i++){
c=f(i);
a=i;
if(c==1)
break;
	}
	printf("%lld\n",a);
}