#include <stdio.h>

int main() 
{
	int m,n,s1=1,s2=1;
	scanf("%d %d",&m,&n);
	int i1,i2;
	for(i1=1;i1<=n;i1++,m-=1)
		s1=s1*m;
	for(i2=1;i2<=n;i2++)
		s2*=i2;
	printf("%d",s1/s2);
	return 0;
}