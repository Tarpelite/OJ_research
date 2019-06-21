#include <stdio.h>
#include <stdlib.h>

int max_(int m,int n)
{
    int max;
    if(m>=n)
        max=m;
    else max=n;
    return max;
}

int main()
{
    int s[100001]={0};
    int n;
    scanf("%d",&n);
    int x,max=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        s[x]++;
        max=max_(max,x);
    }
    int k;
    scanf("%d",&k);
    int temp;
    int j=0;
    for(int i=max;j<k;i--){
        if(s[i]!=0){
            temp=i;
            j++;
        }
    }
    printf("%d %d",temp,s[temp]);
    return 0;
}