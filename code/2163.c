#include<stdio.h>
#include<math.h>
int a[100005]={0};
int main()
{
    int n,i=0,k,x;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&x);
        a[x]=a[x]+1;
        i++;
    }
    scanf("%d",&k);
    for(i=100000;k>1;i--){
        if(a[i]!=0)
            k--;
    }
    for(i;a[i]==0;i--){
    }
    printf("%d %d",i,a[i]);
    return 0;
}