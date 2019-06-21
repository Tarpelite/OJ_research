#include<stdio.h>
int main()
{
    int m,n,a=1,b=1;
    scanf("%d%d",&m,&n);
    for(int i=m;i>m-n;i--){
        a*=i;
    }
    for(int i=2;i<=n;i++){
        b*=i;
    }
    a/=b;
    printf("%d",a);
    return 0;
}