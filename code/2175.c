#include<stdio.h>
#define MAX 30

int main()
{
    int n,m,i,j;
    int c[MAX][MAX];
    for(i=0;i<MAX;i++){
        c[i][0]=c[i][i]=1;
        for(j=1;j<i;j++)
            c[i][j]=c[i-1][j-1]+c[i-1][j];
    }
    scanf("%d%d",&n,&m);
    printf("%d\n",c[n][m]);
return 0;
}