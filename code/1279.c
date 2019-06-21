#include <stdio.h>
#include <stdlib.h>
int f(int a){
	int i=1,s=1;
	for(i=1;i<=a;i++)
	    s=s*i;
	return s;}
int main(int argc, char *argv[]) {
	int i,m,n,k,q=1;
	scanf("%d%d",&m,&n);
    for(i=(m-n+1);i<=m;i++)
        q=q*i;
	k=q/f(n);
	printf("%d",k);
	return 0;
}