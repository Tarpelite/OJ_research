#include <stdio.h>
int main()
{
    int m,n,a,b,c=1,d=1;
    scanf("%d%d",&m,&n);
    if(m==0||n==0) printf("0");
    for(a=m;a>=m-n+1;a--){
        c*=a;
    }
    for(b=1;b<=n;b++){
        d*=b;
    }
    printf("%d",c/d);
    return 0;
}