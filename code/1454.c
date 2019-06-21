#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	int r=1,s=1,t=1,i,c;
	for(i=n;i>0;i--){
		r =r*i;
	}
	for(i=m;i>m-n;i--){
		s = s*i;
	}
	c = s/r;
	printf("%d",c);
	return 0;
	
}