#include <stdio.h>
int main ()
{
	int n,k=1;
	int a;
	int b[100010]={0},c[100010];
	int m;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		b[a]++;
	}

	for(int i=100000;i>0;i--)
	{
		if(b[i]>0)
		{
			c[k]=i;
			k++;
		 } 
	} 
	scanf("%d",&m);
	printf("%d %d",c[m],b[c[m]]);
		
	return 0;
}