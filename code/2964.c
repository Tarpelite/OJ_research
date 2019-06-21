#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=n+1;;i++)
	{
		int count=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0){
				count+=1;
			}
		}
		if(count==0){
			printf("%d",i);
			return 0;
		}
	}
}