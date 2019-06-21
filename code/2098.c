#include<stdio.h>
int comb_num(int, int);
int main()
{
int m, n;
scanf("%d %d", &n, &m);
printf("%d", comb_num(n, m));
return 0;
}
int comb_num(int n, int m){
if ( n<m || m<1 || n<1 ) return 0;
if ( m == 1 ) return n;
if ( m == n ) return 1;
return comb_num(n-1, m) +
comb_num(n-1, m-1);
}