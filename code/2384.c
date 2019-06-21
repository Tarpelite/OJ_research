#include<stdio.h>
int main()
{
	int m,n,i;
	int s1,s2,s;
	scanf("%d%d",&m,&n);
	s1=m;
	s2=1;
	for(i=1;i<n;i++)
	s1=s1*(m-i);
	for(i=1;i<=n;i++)
	s2=s2*i;
	s=s1/s2;
	if(m==0)
	{
		printf("1");
		return 0;
	}
	else
	printf("%d",s);
	return 0;
}