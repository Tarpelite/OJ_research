#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,flag;
    scanf("%d",&n);
    for(i=n+1;1;i++){
        for(j=2,flag=0;j<i;j++)
           if(i%j==0) flag=1;
        if(flag==0) break;}
    printf("%d",i);
    return 0;
}