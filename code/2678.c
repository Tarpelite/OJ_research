#include<stdio.h>

int zs(int x);
int main()
{
	int m,n;
	scanf("%d",&n);
	m=zs(n);
	printf("%d",m);
	return 0;
}

int zs(int x)
{
	int i,y,mod;
	for(y=x+1;y<=100003;y++)
	{
		for(i=2;i<y;i++)
		{
			mod=y%i;
			if(mod==0)
			{
				break;
			}
		}
		if(i==y)
		{
			break;
		}
	}
	return y;
}