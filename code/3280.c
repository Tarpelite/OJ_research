#include <stdio.h>
int comb_num(int x,int y);
int main()
{
	int m,n,r;
	scanf("%d %d",&m,&n);
	r=comb_num(m,n);
	printf("%d",r);
	return 0;
}
int comb_num(int x,int y)
{
	if(x<y||x<1||y<1)
	return 0;
	if(y==1)
	return x;
	if(x==y)
	return 1;
	return comb_num(x-1,y)+comb_num(x-1,y-1);
}