#include<stdio.h>
int main()
{
    int n,i,m,sum;
    scanf("%d",&n);
    m=n+1;
    while(sum!=2){
        sum=0;
    for(i=1;i<=m;i++){
        if(m%i==0){
            sum++;
        }
    }
    m++;
    }
    printf("%d",m-1);
    return 0;
}