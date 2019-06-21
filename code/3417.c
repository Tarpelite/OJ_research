#include<stdio.h>
int isnz(int);
int main()
{
	int n;
	scanf("%d",&n);
	n=n+1;
	while(isnz(n))
	{
		n++;
	}
	printf("%d",n);
	return 0;	
} 
int isnz(int n)
{
	int ori;
	ori=n-1;
	while(n%ori!=0&&ori!=1)
	{
		ori--;
	}
	if(ori!=1) return 1;
	else return 0;
}