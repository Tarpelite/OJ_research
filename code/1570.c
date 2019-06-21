#include <stdio.h>
#include <stdlib.h>
int a[100000]={0};
int main()
{
    int n,i=0,j=0,k,t;

    scanf("%d",&n);
    while(i<n){
        scanf("%d",&t);
        i++;
        a[t]++;
    }
    scanf("%d",&k);
    i=100000;

    while(1){
        while(1){
            i--;
            if(a[i]==0);
            else break;
        }
        k--;
        if(k==0)break;
    }

    printf("%d %d",i,a[i]);
    return 0;
}