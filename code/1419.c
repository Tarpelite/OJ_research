#include<stdio.h>
int main(){
	int m,n,result=1,j,i;
	scanf("%d%d",&m,&n);
	j=m;
	for(i=1;i<=n;i++) {
	result=result*j/i;
	j--;
	}
	printf("%d",result);
}