#include<math.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define lol long long

int c1(int m,int n)
{
    if(m < n) return 0;
    if(m == 0) return 0;
    if(n == 0) return 1;
    if(m == 1) return 1;
    if(m == n) return 1;
    if(m - n > n) n = m - n;    
    if(n == 1) return m;      
    return c1(m-1,n-1) + c1(m-1,n);
}


int c2(int n, int r)
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

lol c3(lol n,lol m)
{
	lol ans=1;
	for(lol i=1;i<=m;i++)
	{
		ans=ans*(n-m+i)/i;
	}
	return ans;
}

int main(int argc,char** argv)
{
    int n,m;
    scanf("%d%d",&m,&n);
    if(!n || !m) return printf("0"),0;
    printf("%lld",c1(m,n));
    return 0;
}