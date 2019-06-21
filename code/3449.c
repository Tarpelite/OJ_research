#include <stdio.h>
#define MAX_N 1005
long long a[MAX_N+1][MAX_N+1];
void C()
{
    int i,j;
    for (i = 0;i<=MAX_N;i++)
    {
        a[i][0] = a[i][i] = 1;
    }
    for (i = 2;i<=MAX_N;i++)
    {
        for (j = 1;j<i;j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
}
int main()
{
    int m,n;
    C();
    while(scanf("%d%d",&m,&n) != EOF)
    {
        //if (n > m)printf("1\n");
        //else if (m < 0 || n < 0)printf("0\n");
        printf("%lld\n",a[m][n]);
    }
    return 0;
}