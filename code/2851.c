#include<stdio.h>
long long f(int x){
	int i;
	long long k=1;
	for(i=1;i<=x;i++)
	   k*=i;
	return k;
}
int main()
{
	int m,n;
	long long s;
	scanf("%d%d",&m,&n);
    if(m==0||n==0)  putchar('0');
    else{
	s=f(m)/(f(m-n)*f(n));	
	printf("%lld",s);}
	return 0;
}