#include <stdio.h>
int C(int n,int m)
{
    int P = 1;
    int i;
    for (i = n;i>=n-m+1;i--)P *= i;
    for (i = 1;i<=m;i++)P /= i;
    //printf("%d\n",P);
    return P;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",C(m,n));
    return 0;
}