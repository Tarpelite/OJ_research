#include<stdio.h>
#include<math.h>
#include<string.h>
int n,p=0,a[10005]={2};

int check(int k)
{
	int i;
	for (i=0;i<=p;i++)
	  if (k%a[i]==0) return 0;
	return 1;
}

void work()
{
	int i;
	for (i=3;i<=n;i+=2)
	{
		if (check(i)) a[++p]=i;
	}
	return;
}

int main()
{
	scanf("%d",&n);
	work();
	
	int i;
	for (i=n+1;i<=150000;i++)
	  if (check(i))
	  {
	  	printf("%d\n",i);
	  	break;
	  }
	return 0;
}