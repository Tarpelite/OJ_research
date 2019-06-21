#include<stdio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int cccc(int,int);
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",cccc(n,m));
}
int cccc(int n,int m)
{
	if(n==m)
		return 1;
	if(m==1)
		return n;
	return cccc(n-1,m-1)+cccc(n-1,m);
}