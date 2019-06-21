#include <stdio.h>
#include <math.h>
int prime_num(int x)   
{    int i,m;
     m=(int)sqrt((double)x);
     for(i=2;i<=m;i++)
     {if(x%i==0)
     break;}
     if(i>m)
     return x;
     else
     return 1;
	 }
int main() {
	int n,i,a;
	scanf("%d",&n);
	for(i=n+1;i<=100005;i++)
	{a=prime_num(i);
	if(a==1)
	continue;
	else
	break;
	}
	printf("%d",a);
	return 0;
}