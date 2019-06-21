#include<stdio.h>
int main()
{
	int m,n,a,b,c,i;
	scanf("%d%d",&n,&m);
	if(n!=0&&m!=0){
		b=c=1;
		for(i=n-m+1;i<=n;i++){
			c=c*i;
		}
		for(i=1;i<=m;i++){
			b=b*i;
		}
		a=c/b;
		printf("%d",a);
	}
	else
	printf("1");
}