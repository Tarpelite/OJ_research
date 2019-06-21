#include<stdio.h>
long long jiecheng(int);
int main()
{int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",jiecheng(m)/jiecheng(m-n)/jiecheng(n));
 return 0;
}

long long jiecheng(int a)
{long long sum=1;
	for (int i=1;i<=a;i++)
		{sum=sum*i;
		}
	return sum;
}