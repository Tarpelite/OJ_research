#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int i;
	for(i=m+1;i<1000000;i++)
	{
		int rec=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				rec=0;
				break;
			}
		}
		if(rec==0)continue;
		else break;
	}
	printf("%d",i);
	return 0;
}