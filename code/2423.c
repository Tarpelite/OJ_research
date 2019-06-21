#include<stdio.h>
int main(){
	int m,n,i,x=1,y=1;
	scanf("%d %d",&m,&n);
	i=0;
	if (m<=n||m==0||n==0)
	printf("1");
	else{	
	for (;i<n;i++)
	x=x*(m-i);
	for(i=1;i<=n;i++)
	y=y*i;
	printf("%d",x/y);
	return 0;
	}
}