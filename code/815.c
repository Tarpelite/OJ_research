#include <stdio.h>
#include <stdlib.h>
int a[100000],b[100000];

int main()
{
    int n,s=1,j,k,e,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&e);
        a[e]=a[e]+1;

    }
    scanf("%d",&k);
    for(j=1;j<=100000;j++){
        if(a[j]!=0){
            b[s]=j;
            s++;
        }
    }
    printf("%d %d",b[s-k],a[b[s-k]]);

    return 0;
}