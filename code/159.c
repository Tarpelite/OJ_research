#include <stdio.h>
int C (int n,int m)
{
    if (m == 0 || m == n || n == 0)return 1;
    else return C(n-1,m-1) + C(n-1,m);
}
int main()
{
    int m,n;
    scanf ("%d%d",&n,&m);
    printf ("%d\n",C(n,m));
    return 0;
}