#include<stdio.h> 
int main()
{
	int m,n,i;
	long long a=1,b=1,c=1,C;
	scanf("%d %d",&m,&n);
	
	if(m==0||n==0){
		printf("0");
		return 0;
	}
	if(m==n){
		printf("1");
		return 0;
	}
	else
	for(i=1;i<=m;i++)
	   a=a*i;
	for(i=1;i<=n;i++)
	   b=b*i;
	for(i=1;i<=(m-n);i++)
	   c=c*i;
	C=a/(b*c);
	
	printf("%d",C);
	return 0;
}