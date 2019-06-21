#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[100000]={0},n,k,i,m,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        a[m]++;
    }
    scanf("%d",&k);
    for(i=99999,count=0;count<k;i--){
        if(a[i]!=0)
            count++;
    }
    printf("%d %d",i+1,a[i+1]);
    return 0;
}