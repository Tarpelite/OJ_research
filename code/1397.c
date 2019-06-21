#include<stdio.h>
int a[10000001]={0};
int main()
{
    int n,k,x,m,s,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        a[x]++;
    }
    scanf("%d",&k);
    for(i=10000000,m=0;i>=0;i--){
        if(a[i]!=0){
            m++;
        }
        if(m==k){
            s=i;
            break;
        }
    }
    printf("%d %d",s,a[s]);
    return 0;
}