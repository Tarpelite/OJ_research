#include<stdio.h>
int com_(int m,int n){
    if(m<n||m<1||n<1)
    return 0;
    if(n==1)
    return m;
    if(n==m)
    return 1;
        return com_(m-1,n)+com_(m-1,n-1);
}
int main()
{
    int m,n,k;
    scanf("%d%d",&m,&n);
    k=com_(m,n);
    printf("%d",k);
    return 0;
}