#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int i;
	int a=1;
	int b=1;
	for(i=0;i<n;i++){
	
	    a=a*(m-i); }
	for(i=1;i<=n;i++){
		b=b*i;
	}
	int c;
	c=a/b;
	printf("%d",c);
	return 0;
}