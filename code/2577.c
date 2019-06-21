#include<stdio.h>

int comb(int m,int n)
{
    if(n==0)
        return 1;
    return(m*comb(m-1,n-1)/n);
}
int main()
{
     int m,n;
     scanf("%d%d",&m,&n);
     printf("%d",comb(m,n));
     return 0;
}