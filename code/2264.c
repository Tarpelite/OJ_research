#include<stdio.h>
long long j(int);
int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",j(m)/(j(n)*j(m-n)));
 } 
 long long j(int f)
 {
 	long long i,c=1;
 	if(f==0)return 1;
	 else
	 { 
 	for(i=1;i<=f;i++)
 	c*=i;
 	return c;
}
 }