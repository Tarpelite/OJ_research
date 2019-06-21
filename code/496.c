#include <stdio.h>
int main()
{
	int m,n,s,a=1,b=1,f,e;
	scanf("%d%d",&m,&n);
	f=n;
	e=m;
	while(n>1){
		a=a*n;
		n--;
	}
	while(m>e-f){
		b=b*m;
		m--;
	}
	printf("%d",b/a);
	return 0;
 }