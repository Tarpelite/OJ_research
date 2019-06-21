#include<stdio.h>
int main(){
	int m,n,i,j,k,fz=1,fm=1;
	scanf("%d%d",&m,&n);
	for(i=m-n+1;i<=m;i++)
	fz*=i;
	for(i=1;i<=n;i++)
	fm*=i;
	printf("%d",fz/fm);
	return 0;
}