#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int comb_num(int x,int y);
int main(int argc, char *argv[]) 
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",comb_num(m,n));
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