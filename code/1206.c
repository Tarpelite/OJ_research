#include<stdio.h>

int main()
{
    int n,a[100000]={0},i,x,k;
    scanf("%d",&n);
    while(n--){
    scanf("%d",&x);
    a[x]+=1;
    }
    scanf("%d",&k);
    for(i=100000;k>=1;i--){
    if(a[i]!=0)
    k--;
    }
  
    printf("%d %d\n",i,a[i]);
    return 0;
}