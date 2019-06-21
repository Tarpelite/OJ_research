#include<stdio.h>
int main()
{
    int m,n,x,i,fenzi=1,fenmu=1,jieguo;
    scanf("%d%d",&m,&n);
    if(m==0||n==0){
        printf("0");
    }
    else{
    i=m-n+1;
    while(m>=i){
        fenzi=fenzi*m;
        m--;
    }
    while(n>0){
        fenmu=fenmu*n;
        n--;
    }
    jieguo=fenzi/fenmu;
    printf("%d",jieguo);}
    return 0;
}