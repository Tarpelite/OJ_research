#include <stdio.h>
int comb_num(int m,int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",comb_num(m,n));
	return 0;
}
int comb_num(int m,int n){
	if(m < n||m == 0||n <= 0)
	return 0;
	else if(n == m)
	return 1;
	else if(n == 1)
	return m;
	return comb_num(m-1,n)+comb_num(m-1,n-1);
}