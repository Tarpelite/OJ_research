#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a=1;
	for(int i=n;i>=n-m+1;i--){
		a*=i;
	}
	int b=1;
	for(int j=1;j<=m;j++){
		b*=j;
	}
	printf("%d",a/b);
	return 0;
}