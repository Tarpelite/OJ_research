#include<stdio.h>
int str[100000]={0};
int main()
{int n,i,a,b,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a);
	str[a]++;
}
scanf("%d",&b);
c=0;
for(i=99999;;i--)
{
	if(str[i]!=0)
	{
		c++;
	}
	if(c==b)
	{
		break;
	}
}
printf("%d %d",i,str[i]);
}