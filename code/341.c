#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int arr[100001]={0},n,k,num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[x]++;
    }
    scanf("%d",&k);
    for(int i=100000;i>0;i--){
        if(arr[i]!=0){
            num++;
        }
        if(num==k){
            printf("%d %d",i,arr[i]);
            break;
        }
    }
    return 0;
}