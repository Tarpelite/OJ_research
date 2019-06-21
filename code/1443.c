#include<stdio.h>
int num(int, int);
int main()
{
int m, n;
scanf("%d%d", &m, &n);
printf("%d\n", num(m, n));
return 0;
}
int num(int m, int n){
if ( m<n || m<1 || n<1 ) return 0;
if ( n == 1 ) return m;
if ( n == m ) return 1;
return num(m-1, n)+num(m-1, n-1);}