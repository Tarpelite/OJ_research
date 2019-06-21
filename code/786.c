#include<stdio.h>
int main(){
	int m,n,r,t,s,i;
	scanf("%d %d",&m,&n);
	for(t=m,i=m-1;i>m-n;i--)
	t=t*i;
	for(r=1,i=1;i<=n;i++)
	r=r*i;
	s=t/r;
	printf("%d",s);
	return 0;
}