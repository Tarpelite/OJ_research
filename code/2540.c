#include <stdio.h>
typedef unsigned long long uint;
int createtable(int table[])
{
	unsigned long long x=2,y,mark;
	int i=0;
	for(;i<10000&&x<100005;x++)
	{
		mark=0;
		for(y=0;(table[y]<=x/2);y++)
		{
			if(x%table[y]==0)
			{
				mark=10086;
				break;
			}
		}
		if(mark==0) 
		{
			table[++i]=x;
		}
	}
	return i;
}
int main()
{
	int table[10000],len,prime,l=0,r,m;
	scanf("%d",&prime);
	table[0]=2;
	r=createtable(table);
	m=(l+r)/2;
	for(;table[m]!=prime;)
	{
		if(table[m]<prime) l=m;
		else r=m;
		m=(l+r)/2;
	}
	printf("%d",table[m+1]);
	return 0;
}