#include<stdio.h>
int main()
{
	int a,b,c,i,j,k;
	scanf("%d",&a);
	for(i=a+1;;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j==i)
		{printf("%d",i);
		break;} 
	}
	return 0;
}