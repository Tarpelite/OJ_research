#include <stdio.h>
int cmn(int m,int n);
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",cmn(m,n));
	return 0;
}
int cmn(int m,int n)
{
	if(m == n){
		return 1;
	}
	else if(m < n||n < 1){
		return 0;
	}
	else if(n == 1){
		return m;
	}
	else{
		return cmn(m-1,n) + cmn(m-1,n-1);
	}
}