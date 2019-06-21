#include<stdio.h>
#define N 1000000
int main(){
    int prime[N]={0};
    int flag[N]={0},i,j,count,n;
    scanf("%d",&n);
    for(i=2,count=0;i<N;i++){
        if(!flag[i])
        prime[count++]=i;
        for(j=2*i;j<N;j+=i){
            flag[j]=1;
        }
    }
    for(i=0;i<count;i++){
        if(prime[i]>n){
            printf("%d ",prime[i]);
            break;
        }
    }
    return 0;
}