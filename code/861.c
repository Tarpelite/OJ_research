#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long int f(int k)
{
	long long int i=1,a=1;
	if(k==0)
	{
		return 1;
	}
	else
	{
		
		for(i=1;i<=k;i++)
		{
			a=a*i;
		}
		return a;
	}
}


int main(int argc, char *argv[]) {
	int m,n,i=1;
	long long int a=1,b=1,c=1,C=1;
	scanf("%d%d",&m,&n);
	a=f(m);
	b=f(n);
    c=f(m-n);
    C=a/(b*c);
    printf("%d",C);
	return 0;
}