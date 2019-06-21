#include <stdio.h>
#include <stdlib.h>
int a[100005];
int main()
{
    int i,t,n,k,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t);
        a[t-1]++;
    }
    scanf("%d",&k);
    for(i=100005;i>=0&&j!=k;i--){
        if(a[i]>0) j++;
        }
    i++;
    printf("%d %d",i+1,a[i]);

    return 0;
}