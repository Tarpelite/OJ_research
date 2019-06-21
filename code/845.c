#include <stdio.h>
#include <stdlib.h>
int a[100000],b[100000];
int main()
{
    int n,m=1,j,k,e,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&e);
        a[e]=a[e]+1;

    }
    scanf("%d",&k);
    for(j=1;j<=100000;j++){
        if(a[j]!=0){
            b[m]=j;
            m++;
        }
    }
    printf("%d %d",b[m-k],a[b[m-k]]);

    return 0;
}