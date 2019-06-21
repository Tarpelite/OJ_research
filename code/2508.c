#include<stdio.h>
int main()
{
	int n,a,b,i,c;
	scanf("%d",&n);
	a=n;
	while(a>=n)
	{
		a=a+1;
	for(i=2;i<a;i++)
	{
		c=a%i;
		if(c==0)
		break;
	}
	if(i==a)
	{
		break;
	}
    }
    printf("%d",a);
    return 0;
}