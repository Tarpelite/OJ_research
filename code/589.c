#include<stdio.h>
int p(int);
int o(int,int);
int main()
{
	int m,n,z;
	scanf("%d%d",&m,&n);
	if(n<m/2)
		n=m-n;
	printf("%d",o(m,n)/p(m-n));
	return 0;
}
int p(int n){
	int i,z=1;
	for(i=0;i<n;i++)
		z*=(n-i);
	return z;
}
int o(int a,int b){
	int i,z=1;
	for(i=a;i>b;i--)
		z*=i;
	return z;
}