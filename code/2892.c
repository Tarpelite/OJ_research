#include<stdio.h>
int f(int m,int n){
int i;
for(i=n+1;i<=m;i++){
    n=n*i;
}
return n;
}
int main()
{
    int m,n,x,y;
    scanf("%d%d",&m,&n);
    x=f(m,m-n+1);
    y=f(n,1);
    printf("%d",x/y);
    return 0;
}