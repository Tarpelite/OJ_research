#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i,m=0;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{for(int x=1;x<i;x++)
	{   if(i%x==0)
		m=m+1;
	}
	if(m==1)
	{printf("%d",i);
	break;}
	m=0;
	}
	return 0;
}