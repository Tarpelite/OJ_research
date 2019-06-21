#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int m,n,i,j,k,l;
	scanf("%d%d",&m,&n);
	long long s1,s2,s3;
	s1=1;
	s2=1;
	s3=1;
	if(m<=n)
		printf("1");
	else if(n==0)
		printf("1");
	else{
	for(i=1;i<=m;i++)
		s1*=i;
	for(j=1;j<=n;j++)
		s2*=j;
	for(k=1;k<=m-n;k++)
		s3*=k;
	
	l=s1/(s2*s3);
	printf("%d",l);}	
	return 0;
}