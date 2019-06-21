#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	long long n;
 	long long now;
 	int i;
 	int flag=0;
 	scanf("%lld",&n);
 	for(now=n+1;now<1000000;now++)
 	{
 		flag=0;
 		for(i=2;i<now;i++)
 		{
 		if(now%i==0)
 		{flag=1;break;}
 		}
 		if(flag==0)
 		{printf("%d",now);break;}
 	}
	return 0;
}