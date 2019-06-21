#include <stdio.h>

int next_num(int m,int n)

{

	if(m<n||m<1||n<1)

	return 0;

	if(n==1)

	return m;

	if(m==n)

	return 1;

	return next_num(m-1,n)+next_num(m-1,n-1);

}

int main()

{

	int m,n,num;

	scanf("%d %d",&m,&n);

	num=next_num(m,n);

	printf("%d",num);

	return 0;

}