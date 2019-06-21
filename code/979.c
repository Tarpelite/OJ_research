#include <stdio.h>
int main()
{
    int m,n,i,j,k,s;
    j=1;k=1;
    scanf("%d%d",&m,&n);
    for(i=(m-n+1);i<=m;i++){
        j*=i;
    }
    for(i=1;i<=n;i++){
        k*=i;
    }
    s=j/k;
    printf("%d",s);
    return 0;
}