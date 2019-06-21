#include<stdio.h>
int n,m,s1=1,s2=1,i;
int main()
{
	scanf("%d%d",&m,&n);
	if(n==0) printf("0");
	else
	{
		for(i=1;i<=n;i++) s1=s1*(m-i+1);
		for(i=1;i<=n;i++) s2=s2*i;
		printf("%d",s1/s2);
	}
	return 0;
}