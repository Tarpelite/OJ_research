#include <stdio.h>
#include <stdlib.h>
int ans(int m,int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d",&m,&n);
	
	printf("%d",ans(m,n));
	return 0;
}
int ans(int m,int n){
	if (m<n||m<1||n<1)
		return 0;
	else if(n==1)
		return m;
	else if(m==n)
		return 1;
	else
		return ans(m-1,n)+ans(m-1,n-1);
}