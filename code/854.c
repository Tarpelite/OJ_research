#include<stdio.h>
int main()
{
	int m,n,i,k,p;
	scanf("%d%d",&m,&n);
	k=m;p = 1;
	for(i = 1;i<n;i++){
		k = k*(m-1);m--;
	}
	for(i = 1;i<n;i++){
		p = p*(i+1);
	}
	printf("%d",k/p);
}