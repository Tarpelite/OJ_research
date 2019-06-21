#include<stdio.h>
#define N 16210000
int a[N];
int main(void)
{
	int m,n;
	int num=1,i;
	scanf("%d%d",&m,&n);
	if(n>m) printf("0");
	else
	{
		for(i=1;i<=m-n;i++) 
		{
			num*=(n+i);
			num/=i;
		}
		printf("%d",num);
	}
	for(i=0;i<N;i++) a[i]=1;
	return 0;
}