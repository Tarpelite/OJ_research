#include<stdio.h>
int num[101][101];
int main()
{
    int m,n,i,j;
   scanf("%d%d",&m,&n);
    for(i=0;i<=100;i++)      
    {
        num[i][0]=1;
        num[i][i]=1;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            num[i][j]=num[i-1][j-1]+num[i-1][j];   
        } 
    }
    printf("%d\n",num[m][n]);
    return 0;
}