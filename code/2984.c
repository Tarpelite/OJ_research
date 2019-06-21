#include<stdio.h>
int get_num(int,int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	printf("%d",get_num(m,n));
	
	return 0;
 } 
 int get_num(int m,int n)
 {
 	if(m<n||m<1||n<1)  return 0;
 	if(n==1)  return m;
 	if(m==1)  return 1;
 	return get_num(m-1,n)+get_num(m-1,n-1);
 }