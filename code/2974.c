#include <stdio.h>
int f(int n, int m){
if (n==1)return m;
else if(n==m)return 1;
else {return (f(n,m-1)+f(n-1,m-1));}
}
int main(){
    int n,m;
    scanf("%d%d",&m,&n);
    if(n==0){putchar('0');return 0;}
    printf("%d",f(n,m));
return 0;
}