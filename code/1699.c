#include <stdio.h>
int a[10000001];
int main()
{
    int n, i, k, x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        a[x]=a[x]+1;
    }
    scanf("%d",&k);
    for(i=n-1;k>0;i--){
        if(a[i]!=0)
            k--;
    }
    printf("%d %d\n",i+1,a[i+1]);
}