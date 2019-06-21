#include<stdio.h>
int main(){
    int m, n, i;
    scanf("%d%d",&m,&n);
    int fenzi, fenmu;
    fenzi=1;
    fenmu=1;
    for(i=m-n+1;i<=m;i++)
    fenzi*=i;

    for(i=1;i<=n;i++)
    fenmu*=i;

    int jieguo;

    jieguo=fenzi/fenmu;

    printf("%d", jieguo);

    return 0;
    }