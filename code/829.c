#include <stdio.h>
#include <stdlib.h>
int x[100001]={};
int main()
{
    int n,i,a,ch=0,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        x[a]++;
    }
    scanf("%d",&k);
    for(i=100000;i>=1;i--){
        if(x[i]!=0) ch++;
        if(ch==k) break;
    }
    printf("%d %d",i,x[i]);
    return 0;
}