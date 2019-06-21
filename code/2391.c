#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int zhishu(int m)
{
	int k,i;
	k=sqrt(m+1);
	for(i=2;i<=k;i++)
	{
		if(m%i==0) break;
	}
	if(i>=k+1) return m;
	else return zhishu(m+1);
}
int main()
{
	int n,jie;
	double k; 
	scanf("%d",&n);
	n=n+1;
	jie=zhishu(n);
	printf("%d",jie);
	return 0;
}