#include<stdio.h>
int jie(int);
int main()
{
	int m,n;
	int num;
	int a;
	int i;
	scanf("%d%d",&m,&n);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	a=m;
	i=m-1;
	while(i>=(m-n+1))
	{
		a=a*i;
		i--;
	}
	num=a/jie(n);
	printf("%d",num);
	return 0;
}

int jie(int m)
{
	int j;
	int k;
	k=1;
    j=2;
	while(j<=m)
	{
		k=k*j;
		j++;
	}
	return k;

}