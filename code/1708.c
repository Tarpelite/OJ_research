#include<stdio.h>
int main()
{
	int a,b,i=2,d=0,m=0;
	scanf("%d",&a);
	b=a+1;
	while(b<100005)
	{
		for(i;i<b;i++)
		{
			if(b%i==0)
			d++;
		}
		if(d==0)
		{
			printf("%d",b);
			break;
		}
		else
		{
			b++;
			d=0;
			i=2;
		}
	}
		
	return 0;
}