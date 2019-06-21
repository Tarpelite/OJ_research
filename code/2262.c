#include <stdio.h>
#include <stdlib.h>

int main()
{int n,a[100001]={0},i=0,b,k;
scanf("%d",&n);
while(i<n){
    scanf("%d",&b);
    a[b]=a[b]+1;
    i++;
}
   scanf("%d",&k);
   for(i=100000;k>1;i--){
    if(a[i]!=0)
        k--;
   }
   for(i;a[i]==0;i--){}
    printf("%d %d",i,a[i]);
    return 0;
}