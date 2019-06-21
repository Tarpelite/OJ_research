#include<stdio.h>
int main()
{
	int m,n;
	long long x;
	long long a=1,b=1,c=1,i=1;
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++){
		a=a*i;
	}
	for (i=1;i<=m-n;i++){
		b=b*i;
	}
	for (i=1;i<=n;i++){
		c=c*i;
	}
	x=a/(b*c);
	if (n==0||m==0){
		x=0;
	}
	printf("%d",x);
	return 0;
}