#include<stdio.h>
int main()
{
    int i,m,n,x,y,z;
    scanf("%d%d",&m,&n);
    if(n==0){
        z=0;
        }
    else if(m==1){
        z=1;
        }
    else if(m==n){
        z=1;
        }
    else{
    for(x=1,i=m-n+1;i<=m;i++){
        x=x*i;}
    for(i=1,y=1;i<=n;i++){
        y=y*i;}
    z=x/y;}
    printf("%d",z);
    return 0;
}