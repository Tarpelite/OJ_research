#include <stdio.h>
int ZuHe(int n,int k)
{
	int i = 1;
	int temp1 = 1,temp2 =1;
	if (n==k)
	{
		return 1;
	}
	else
	{
		for (i=1;i<=k;i++)
		{
	   		temp1 *= n-i+1;
	   		temp2 *=i;
	  	}
	  temp1 /=temp2; 
	  return temp1;
	}
}
void main()
{
 int n,k,num;
 scanf("%d%d",&n,&k);
 num = ZuHe(n,k);
 printf("%d\n",num);
}