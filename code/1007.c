#include<stdio.h>
int main()
{
    int m,n,i,x,y;
    scanf("%d%d",&m,&n);
    if(n==0||m==0){
        printf("1");
    }
    else{
    for(i=n,x=m,y=n;i>1;i--,x--,y--){
        m=m*(x-1);
        n=n*(y-1);
    }
    m=m/n;
    printf("%d",m);
    }
    return 0;
}