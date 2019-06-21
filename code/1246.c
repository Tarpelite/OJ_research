#include<stdio.h>
int main(){
	int m,n,a=1,b=1,i;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++){
		a=a*m;
		m--;
	}
	for(i=1;i<=n;i++){
		a=a/b;
		b++;
	}
	printf("%d",a);
	return 0;
}