#include <stdio.h>
int zh(int,int);

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",zh(m,n));

    return 0;
}
int zh(int m, int n){
if ( m<n || m<1 || n<1 ) return 0;
if ( n == 1 ) return m;
if ( n == m ) return 1;
return zh(m-1,n)+zh(m-1, n-1);
}