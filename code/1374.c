#include<stdio.h>
int main()
{
    int a[100005]={0},b;
    int n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&k);
    int j=0;
    for(i=100004;i>=0;i--){
        if(a[i]!=0){
            j++;
        }
        if(j==k){
            break;
        }
    }
    printf("%d %d",i,a[i]);
}