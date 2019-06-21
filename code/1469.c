#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,k;
    int i,j;
    int a[100001]={0};
    int b;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&b);
        a[b]=a[b]+1;

        }

    scanf("%d",&k);

    for(i=100000,j=0;i>0;i--){
        if(a[i]!=0){
            j=j+1;
        }

        if(j==k){
            printf("%d %d",i,a[i]);
            break;
        }
    }

    return 0;
}