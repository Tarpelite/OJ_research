#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,x,a[100010]={0};
    int j,num,result1,result2;
    scanf("%d",&n);
    while (n){
            scanf("%d",&x);
            a[x]++;
            n--;
    }
    scanf("%d",&k);
    for (j=100000,num=0;num<k;j--){
        if (a[j]==0)
            continue;
        else {
            num++;
            result1 = j;
            result2 = a[j];
        }
    }
    printf("%d %d",result1,result2);
    return 0;
}