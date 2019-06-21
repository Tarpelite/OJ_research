#include <stdio.h>
#include <math.h>
unsigned int jiecheng(unsigned int n);
int main ()
{
	unsigned int m,n;
	scanf("%u %u",&m,&n);
	int i=m-1,r=m;
	while(i>m-n){
		r=r*i;
		i--;
	}

	unsigned int num=r/jiecheng(n);
	printf("%u",num);
	return 0;
 } 
unsigned int jiecheng(unsigned int n)
{
	unsigned int i=1;
	unsigned int r=1;
	while(i<=n){
		r=r*i;
		i++;
	}
	return r;
}