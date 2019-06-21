#include <stdio.h>
int cs[100000];

int main(void)
{
	int n,i,k,l;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&l);
		cs[l]++;
	}
	
	scanf("%d",&k);
	
	int j=0;
	for(i=100000;i>=1;i--)
	{
		if(cs[i])
		{
			j++;
			if(j==k)
			{
				printf("%d %d",i,cs[i]);
				break;
			}
		}

	}
	
	return 0;
}