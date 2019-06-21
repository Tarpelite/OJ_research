#include<stdio.h>
int a[101][101];
int main()
{
    int m,n,i,j;
   scanf("%d%d",&m,&n);
    for(i=0;i<=100;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    printf("%d\n",a[m][n]);
    return 0;
}