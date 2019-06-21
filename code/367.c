#include<stdio.h>
int main()
{int n,i,m,a[100001]={0},k=0,t;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{scanf("%d",&t);
		 a[t]=a[t]+1;
		}
	scanf("%d",&m);
	for (i=100000;i>=0;i--)
		{if (a[i]!=0)
			{k=k+1;
			if (k==m)
				{printf("%d %d",i,a[i]);break;}
			}
		}
	return 0;
}