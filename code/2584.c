#include <stdio.h>
#include <stdlib.h>
int C(int,int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char *argv[]) {
    int m,n,a;
    scanf("%d%d",&m,&n);
    a=C(m,n);
    printf("%d",a);
	return 0;
}

int C(int m,int n)
{
	if(m==n)
	return 1;
	if(n==1)
	return m;
	if(m==0)
	return 0;
	return C(m-1,n)+C(m-1,n-1);
}