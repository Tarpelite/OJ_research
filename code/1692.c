#include<stdio.h>
int main()
{
    int a=1,b=1,c,d,m,n,x;
    scanf("%d%d",&m,&n);
    for(c=n;c>0;c--){
        a=a*(m-c+1);
    }
    for(d=1;d<=n;d++){
        b=b*d;
    }
    x=a/b;
    printf("%d",x);
    return 0;
}