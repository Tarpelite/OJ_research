#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	
	int i,j=2,a=1,b=1,ans;
	for (i=m-n+1;i<=m;i++)
	{
	  a=a*i;
	  while ((a%j==0)&&(j<=n))
	  {
	  	a/=j;
	  	j++; 
	  }
    }
	printf("%d\n",a);
	
	return 0;
}