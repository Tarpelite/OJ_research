#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	long long s=1,i,j=1,k=1;
	for(i=1;i<=m;i++){
		s=s*i;
	}
	for(i=1;i<=n;i++){
		j=j*i;
	}
	for(i=1;i<=(m-n);i++){
		k=k*i;
	}
	printf("%d",s/(j*k));
	return 0;
}