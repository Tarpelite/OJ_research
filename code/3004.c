#include <stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    int a[100002]={0},i=0,k,j;
    for(i=0;i<n;i++){
        scanf("%d",&j);
        a[j]+=1;
    }
    scanf("%d",&k);
    for(i=100000;1;i--){
        if(a[i]!=0)s++;
        if (s==k){printf("%d %d",i,a[i]);return 0;}
    }
return 0;
}