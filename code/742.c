#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int m,n,son=1,mum=1,output;
	scanf("%d%d",&m,&n);
	for(int i=m;i>(m-n);i--)
	son=son*i;
	for(int j=n;j>0;j--)
	mum=mum*j;
	output=son/mum;
	printf("%d",output);
	return 0;
}