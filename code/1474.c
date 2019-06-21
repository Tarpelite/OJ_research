#include<stdio.h>
#include<math.h>
int v(int a)
{
	int j,i=0,p=1;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			i++;
			if(i>0)
			return p;
		}
	}
		return (p-1);
}
int main()
{
	int a,ans,b;
	scanf("%d",&a);
	ans=a+1;
	b=v(a+1);
	while(b==1)
	{
		ans++;
		b=v(ans);	
	}
	printf("%d",ans);
	return 0;
}