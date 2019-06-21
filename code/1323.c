#include<stdio.h>
int main()
{
	int m,n,c,i;
	scanf("%d%d",&m,&n);
	c=1;
	for(i=0;i<n;i++){
		c=c*(m-i)/(i+1);
	}
	printf("%d",c);
}