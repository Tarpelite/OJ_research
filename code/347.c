#include<stdio.h>
int combination(int,int);
int main()
{
int m,n;
scanf("%d%d",&m,&n);
printf("%d",combination(m,n));
return 0;
}

int combination(int m,int n) 
{
if(m<n||m<1||n<1)  return 0;
if(n==1)  return m;
if(n==m) return 1;
return combination(m-1,n)+combination(m-1,n-1);
}