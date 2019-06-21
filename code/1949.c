#include<stdio.h>
int fuc(const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a);
}
int main()
{
	int i,j,n,num[1000000],z,j1,j2;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&num[i]);
	}
	int k;
	num[n] = 0;
	scanf("%d",&k);
	qsort(num,n,sizeof(num[0]),fuc);
	z = 0;
	for(i = 0;i < n;i++)
	{
		
		if(num[i] != num[i + 1])
		{
			z++;
		}
		else
		z = z;
		if(z == (k - 1))
		{
		j2 = i;
		break;
		}
	}
	z = 0;
	for(i = 0;i < n;i++)
	{
		
		if(num[i] != num[i + 1])
		{
			z++;
		}
		else
		z = z;
		if(z == k)
		{
		j1 = i;
		break;
		}
	}
	printf("%d %d",num[j1],j1-j2);
	return 0;
}