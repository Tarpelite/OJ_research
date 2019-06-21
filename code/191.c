#include<stdio.h>
int a[10000001];
int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        a[k]++;
    }
    scanf("%d",&k);
    int s=0;
    for(int i=10000001;i>=1;i--)
        if(a[i]){
            s++;
            if(s==k){
                printf("%d %d",i,a[i]);
                break;
            }
        }

    return 0;
}