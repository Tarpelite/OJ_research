#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isprime(int a)
{
	int i;
	for(i=2;i<a;i++)
    if(a%i==0)return 0;
	return 1;
	
}


int main(int argc, char *argv[]) {
	int n,i=2,a=0;
	scanf("%d",&n);
	for(n=n+1;n<=200000;n++)
	{
		if(isprime(n))
		{
			printf("%d",n);
			break;
		}
	}
	
	return 0;
}