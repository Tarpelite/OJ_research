#include<stdio.h>
int zhishu(int);
int main()
{int i,n;
	scanf("%d",&n);
	for (i=n+1;i<200000;i++)
		{if (zhishu(i)==1)
			{printf("%d",i);break;}
		}
	return 0;
}

int zhishu(int a)
{int t=2,m=1;
	while (t<a)
		{
		if (a%t==0)
			{m=0;break;}
		t=t+1;
		}
	return m;
}