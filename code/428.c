#include<stdio.h>
int main()
{
	int m,n,i;
	long long x,y,a,z;
	scanf("%d %d",&m,&n);
	if((n==0)||(n==m)){
		printf("1");
		return 0;
	}
	x=m-n;
	i=1;
	y=1;
	z=1;
	while(i<=m){
		y=y*i;
		i=i+1;
	}
	i=1;
	while(i<=n){
		z=z*i;
		i=i+1;
	}
	while(x>0){
		y=y/x;
		x=x-1;
	}
	a=y/z;
	printf("%lld",a);
	return 0;
}