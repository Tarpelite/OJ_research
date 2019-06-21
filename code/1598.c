#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n,a=1,b=1,i;
	scanf("%d %d",&m,&n);
	int result;
    for(i=m-n+1;i<=m;i++){
    	a=a*i;
	}
	for(i=1;i<=n;i++){
		b=b*i;
	}
	printf("%d",a/b);
	return 0;
}