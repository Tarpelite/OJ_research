#include <stdio.h>
int haha[110];
int main()
{
	int n,k,a,i=0,l,r,t,sum1,sum2,sum3,x,y;
	scanf("%d%d",&n,&k);
	t=n;
	while(n--)
	{
		scanf("%d",&a);
		haha[i]=a;
		i++;
	}
	while(k--)
	{
		sum1=0,sum2=1;
		scanf("%d%d",&l,&r);
		i=l;
		while(i<=r)
		{
			sum1=sum1+(haha[i]%t);
			sum1=sum1%t;
			i++;
		}
		
		i=l;
		while(i<=r)
		{
			sum2=sum2*(haha[i]%t);
			sum2=sum2%t;
			i++;
		}
		if(sum1>sum2)
		{
			y=sum1,x=sum2;
		}
		else
		{
			y=sum2,x=sum1;
		}
		i=x+1,sum3=haha[x];
		while(i<=y)
		{
			sum3=sum3^haha[i];
			i++;
		}
		printf("%d\n",sum3);
	}
	return 0;
}