#include<stdio.h>
int count(int,int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",count(m,n));
	return 0; 
} 
int count(int m,int n)
{
	if(m<n||m<1||n<1)
	    return 0;
	if(n==1)
	    return m;
	if(n==m)
	    return 1;
	return count(m-1,n)+count(m-1,n-1);
}