#include <stdio.h>

int zhishu(int a)
{int i=2,s=0,n,m;
while(i<a)
{n=a%i;
i=i+1;
if(n==0)
s=s+1;//不是质数 
else
s=s;//是质数 
}
if(s==0)
m=0;
//是质数 
else
m=1;
//不是质数 
return m;
}
int main() 
{
	
	int n,p=1;
	scanf("%d",&n);
	n=n+1;
	while(p!=0)
	{p=zhishu(n);
	n=n+1;
	}
	
	n=n-1;
	printf("%d",n);
	
	return 0;
}