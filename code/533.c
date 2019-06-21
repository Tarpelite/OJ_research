#include<stdio.h>
int main()
{
	int a,i,j,s=0;
	scanf("%d",&a);
	for(i=a+1;;i++)
	{
		for(j=2;j<i;j++)
		if(i%j==0)
		s++;
		if(s==0)
		{
			printf("%d",i);
			break;
		}
		else
		s=0;
	}
	return 0;
}