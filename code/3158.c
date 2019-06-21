#include<stdio.h>
int f(int n){int i,k=1;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{k=0;break;}
}
if(k==1) return 1;
if(k==0 )return 0;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a+1;
	while(f(b)!=1){b++;
	}
	printf("%d",b);
}