#include <stdio.h>
int comb_num(int m,int n)
{   if(m<n||m<1||n<1)
    return 0;
    if(n==1)
    return m;
    if(m==n)
    return 1;
    return comb_num(m-1,n)+comb_num(m-1,n-1);
}
int main()
{   int m,n,x;   
    scanf("%d %d",&m,&n);
	x=comb_num(m,n);
	printf("%d",x); 
	return 0;
}