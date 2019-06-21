#include<stdio.h>
int zhishu(int);
int main()
{	int n,m;
	scanf("%d",&n);
	n++;
	while(zhishu(n)!=1)
		{n++;}
	printf("%d",n);
	return 0;

}
int zhishu(int n)
{	int i=2;

	for(;i<n;i++)
		{	if(n%i==0)
				return 0;
			
		}
	return 1;
		
	
}