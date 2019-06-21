#include<stdio.h>
int c(int m,int n){
if(n==m)
return 1;
if(n==1)
return m;

return c(m-1,n-1)+c(m-1,n);
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",c(m,n));
    return 0;
}