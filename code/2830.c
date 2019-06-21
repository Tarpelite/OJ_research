#include<stdio.h>
long long A(int n){
	if(n<=1)
	return 1;
	return n*A(n-1);
}
int main()
{
	int m,n;
	long long s;
	scanf("%d%d",&m,&n);
	s=A(m)/(A(m-n)*A(n));
	printf("%d",s);
	return 0;
}