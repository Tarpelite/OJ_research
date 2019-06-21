#include <stdio.h>

int main()
{
    int n,k,i,a[100001]={},b,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b);
        a[b]++;
        if(b>max){
            max=b;
        }
    }
    scanf("%d",&k);
    for(i=max;i>=0;i--){
        if(a[i]!=0){
            k--;
        }
        if(k==0){
            break;
        }
    }
    printf("%d %d",i,a[i]);
}