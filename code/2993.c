#include <stdio.h>

int jiecheng(a,b){
	int i,ret=1;
	for(i=a;i>=b;i--){
		ret*=i;
	}
	return ret;
}

int main ()
{	
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",jiecheng(m,m-n+1)/jiecheng(n,1));
		
	return 0;
}