#include <stdio.h>
#include <stdlib.h>
int C(int n,int m)
{
    if (n < m || n <= 0 || m < 0)return 0;
    if (m == 0 || m == n)return 1;
    switch (m)
    {
        case 1:return n;
        case 2:return n*(n-1) / 2;
        case 3:return n*(n-1)*(n-2) / 6;
        default:
            return C(n-1,m-1) + C(n-1,m);
    }
    
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if (n == 0 && m == 0)printf("0\n");
    else printf("%d\n",C(n,m));
	return 0;
}