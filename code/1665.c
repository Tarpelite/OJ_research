#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n,i,a=1,b=1;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++){
		a=a*i;
	}
	for(i=0;i<n;i++){
		b=b*(m-i);
	}
	int num=b/a;
	printf("%d",num);
}