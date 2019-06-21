#include <stdio.h>
int main(){
	unsigned long long i,m,n,a=1,b=1,c;
	scanf("%llu%llu",&m,&n);
	for(i=n+1;i<=m;i++){
		a*=i;
	}
	for(i=1;i<=(m-n);i++){
		b*=i;
	}
	c=a/b;
	printf("%d",c);
	return 0;
}