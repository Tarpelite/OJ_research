#include<stdio.h>
	
int main(){
	
	int m,n,i,x=1,z=1,k;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--)
	x=x*i;
	for(i=n;i>0;i--)
	z=z*i;
	k=x/z;
	
	printf("%d",k);
	
	return 0;	
}