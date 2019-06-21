#include<stdio.h>
int comb(int m,int n);
int main()
{int m,n,x,i,a=1;
scanf("%d%d",&m,&n);
a=comb(m,n);
printf("%d",a);
return 0;
}
int comb(int m,int n)
{if(m<n||m<1||n<1)
return 0;
if(n==1)
return m;
if(m==n)
return 1;
return comb(m-1,n)+comb(m-1,n-1);
}