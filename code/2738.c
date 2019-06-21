#include<stdio.h>
int a[100005]={0};
int main(){
    int i,x,n,k,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        a[x]++;
    }
    scanf("%d",&k);
    x=1;
    i=100004;
    while(x<k){
        if(a[i]!=0)x++;
        i--;
    }
    printf("%d %d",i,a[i]);
    return 0;
}