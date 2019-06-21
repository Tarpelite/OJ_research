#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=n+1;
	while(1)
	{int b=0;
	int t=2;
	for(t;t<i;t++)
	{if(i%t==0)
	 b++;
	 } 
    if(b==0)
	break;
	 i++;}
	printf("%d",i);
}