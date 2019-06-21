#include<stdio.h>
#include<math.h>

int f(int x)
{
	int i,flag=0;
	if(i==2&&i==3)flag=0;
	else
	{
		for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0){flag=1;break;}
	}
	}
	if(flag==1)return 1;
	if(flag==0)return 0;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	i=n;
	while(1)
	{
		i=i+1;
		if(0==f(i))break;
	}
	printf("%d",i);
 }