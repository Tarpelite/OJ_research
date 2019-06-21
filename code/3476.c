#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lol long long

int c(int m,int n)
{
    if(m < n) return 0;
    if(m == 0) return 0;
    if(n == 0) return 1;
    if(m == 1) return 1;
    if(m == n) return 1;
    if(m - n > n) n = m - n;    
    if(n == 1) return m;      
    return c(m-1,n-1) + c(m-1,n);
}


int com(int n, int r)
{// return C(n, r)
    if( n-r > r ) r = n-r; // C(n, r) = C(n, n-r)
    int i, j, s = 1;
    for( i=0, j=1; i < r; ++i )
    {
        s *= (n-i);
        for( ; j <= r && s%j == 0; ++j ) s /= j;
    }
    return s;
}

int main(int argc,char** argv)
{
    int n,m;
    scanf("%d%d",&m,&n);
    printf("%d",com(m,n));
    return 0;
}