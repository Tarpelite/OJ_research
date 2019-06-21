#include<stdio.h>
int like(int n)
{
	for(int i=2;i<=n/2;i++)
	if(n%i==0)return 0;
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	n++;
	while(1)
	if(like(n++)==1)break;
	printf("%d\n",--n);
	return 0;
}