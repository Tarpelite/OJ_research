#include<stdio.h>
int C_(int m,int n)
{
    if(n==1){
        return m;
    }
    if(n==m){
        return 1;
    }
    return C_(m-1,n)+C_(m-1,n-1);
}
void main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    printf("%d",C_(m,n));
}