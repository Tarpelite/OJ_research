#include<stdio.h>
int main()
{
    int n,i,a[100000]={0},b,k,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&k);
    i=99999;
    while(1){
        if(a[i]!=0){
            j++;
        }
        if(j==k)break;
        i--;
    }
    printf("%d %d",i,a[i]);
    return 0;
}