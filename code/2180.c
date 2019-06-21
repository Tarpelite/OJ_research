#include <stdio.h>
int main()
{
	int i=0,m,n,fz=1,fm=1;
	scanf("%d %d",&m,&n);
	for (i=m;i>=m-n+1;i--){
		fz*=i;
	}
	for (i=1;i<=n;i++){
		fm*=i;
	}
	printf("%d",fz/fm);
	return 0;
}