#include<stdio.h>
int zhi(int);
int main()
{
	int a,n,b,i;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++)
	{
		if(zhi(i)==1){
			printf("%d",i);
			return 0;
		}
	}
}
int zhi(int n)
{
	int e,f;
	for(e=n-1;e>1;e--)
	{
		if(n%e==0) return 2;;
	}
 return 1;
}