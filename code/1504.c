#include<stdio.h>
#include<stdlib.h>
int max_(int m,int n)
{
    int max;
    if(m>=n)
       max=m;
    else
        max=n;
    return max;
}
int main()
{
    int n,max=0,i;
    scanf("%d",&n);
    int s[100001]={0};
    int x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        s[x]++;
        max=max_(max,x);
    }
    int j=0;
    int fin,k;
    scanf("%d",&k);
    for(i=max;j<k;i--){
        if(s[i]!=0){
           fin=i;
           j++;
        }
    }
    printf("%d %d",fin,s[fin]);
    return 0;
}