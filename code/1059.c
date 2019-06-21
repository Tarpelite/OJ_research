#include<stdio.h>
int main() {
	int m,n;int p,q;int i;p=1;q=1;int z;
	scanf("%d%d",&m,&n);
	for(i=m;i>=m-n+1;i--){p=p*i;
	}for(i=n;i>=1;i--){q=q*i;
	}
	z=p/q;
	printf("%d",z);
	return 0;
}