#include <stdio.h>
int main()
{
    int a[100010]={0},n,i=0,m,k,rank=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);
    for(i=100008;rank!=k;i--){
        if(a[i]!=0) rank++;
    }
    printf("%d %d",i,a[i]);
    return 0;
}