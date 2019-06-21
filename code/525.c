#include<stdio.h>
#include<stdlib.h>
int zs(int n)
{
       int i;
	for(i=2;i<=n/2;i++)
	if(n%i==0)return 0;
	return 1;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	n++;
	while(1)
	if(zs(n++)==1)break;
	printf("%d\n",--n);
	return 0;
}