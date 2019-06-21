#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n,a=1,b=1,c;
	scanf("%d %d",&m,&n);
	int result;
    for(c=m-n+1;c<=m;c++){
    	a=a*c;
	}
	for(c=1;c<=n;c++){
		b=b*c;
	}
	printf("%d",a/b);
	return 0;
}