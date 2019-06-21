#include<stdio.h>
int main()
{
	int m,n,i,t1=1,t2=1;
	scanf("%d%d",&m,&n);
	if(m==0||m<=n)
	printf("1");
	else
	{
		if(m-n<n)
		n=m-n;
		for(i=n;i>=1;i--)
		{
			t1=t1*m;
			m--;
		}
		for(i=n;i>=1;i--)
		{
			t2=t2*i;
		}

		printf("%d",t1/t2);
	}
	return 0;
}