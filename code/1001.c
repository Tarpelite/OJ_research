#include <stdio.h>
#include <stdlib.h>
int a[100005]={0};

int main()
{
    int n,k,x,i=1,j,m=100000;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        a[x]++;
    }
    scanf("%d",&k);
    for(j=100000;j>0;j--){
        if(a[j]!=0){
            k--;
        }
        if(k==0)break;
    }
    printf("%d %d\n",j,a[j]);
    return 0;
}