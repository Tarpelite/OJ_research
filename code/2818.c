#include<stdio.h>
int main()
{
	int m,n,C,num = 1,den = 1,i;
	scanf("%d%d",&m,&n);
	if (n >= m){
		C = 1;
	}
	else {
		for (i = m - n + 1;i <= m;i++){
			num = num * i;
		}
		for (i = 1;i <= n;i++){
			den = den * i;
		}
		C = num / den;
	}
	printf("%d",C);
	return 0;
}