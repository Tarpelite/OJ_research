#include <stdio.h>
#include <stdlib.h>
#define N_LIM 10000
void inf_call()
{
    inf_call();
}
int C(int n,int m)
{
    //if (n < m || n < 0 || m < 0)return 0;
    if (m == 0 || m == n || n == 0)return 1;
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
    if (n > N_LIM || m > N_LIM)
    {
        inf_call();
    }
    else printf("%d\n",C(n,m));
	return 0;
}