#include <stdio.h>
#define min(x,y) (x<y?x:y)//数据太大会溢出
long long int c( int m,int n ){
    long long int a = 1,b = 1;
    n = min(n,m-n);
    if( n == 0 )
        return 1;
    for( int i = m ; i >=m-n+1 ; i--  )
        a = a*i;
    for( int i = 1 ; i <= n ; i++ )
        b = b*i;
    return a/b;
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    printf("%lld",c(m,n));

    return 0;
}