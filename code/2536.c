#include <stdio.h>

int a[100000+20];

int main(){
    int n,i,p,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&p);
        a[p]++;
    }
    scanf("%d",&k);
    for(i=100000;k>0;i--){
        if(a[i]>0) k--;
    }
    printf("%d %d\n",i+1,a[i+1]);
    return 0;
}