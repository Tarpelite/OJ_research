#include<stdio.h>
#include<math.h>
int n,i,t;
int boor(int k)
{
	t=sqrt(k);
	for(i=2;i<=t;i++)
	if(k%i==0) return 1;
	return 0;
}
int main()
{
	scanf("%d",&n);
	while(boor(n+1)==1) n++;
	printf("%d",n+1);
	return 0;
}