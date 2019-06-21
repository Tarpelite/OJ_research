#include<stdio.h>
long long int jiecheng(int a)
{
	long long int jieguo=1;
	for(;a>0;a--)
	{
		jieguo=jieguo*a;
	}
	return(jieguo);
}
int main()
{
	long long int jiecheng(int a);
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",jiecheng(m)/  (  jiecheng(n)*jiecheng(m-n) )  );
	return 0;
}