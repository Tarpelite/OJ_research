#include<stdio.h>
int main()
{
	int m,n,a,b,c,d,i;
	scanf("%d%d",&m,&n);
	a=1;
	b=1;
	for(i=0;i<n;i++){
		a=a*(m-i);
		b=b*(i+1);
	}
	c=a/b;
	printf("%d",c);
	return 0;
}