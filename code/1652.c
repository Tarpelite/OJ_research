#include<stdio.h>
int main(){
	int m,n,ji1=1,ji2=1,i;
	scanf("%d%d",&m,&n);
	for(i=n;i>0;i--){
		ji1*=m;
		m--;
	}
	while(n>0){
		ji2*=n;
		n--;
	}
	printf("%d",ji1/ji2);
}