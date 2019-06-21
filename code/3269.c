#include<stdio.h>
int f(int w);
int main()
{
	int m,n,x,i,a=1,b,c=1;
	scanf("%d%d",&m,&n);
	if(n==0){
		printf("%d",0);
	}
	else {	
	x=m-n;
	if(x<n)
		n=x;
	i=m;
	while(c<=n){
		a=a*i;
		i--;
		c++;
	}
	b=f(n);
	printf("%d",a/b);
	}
	return 0;
	
	
}
int f(int w){
	int i=1,q=1;
	while(i<=w){
		q=q*i;
		i++;
	}
	return q;
}