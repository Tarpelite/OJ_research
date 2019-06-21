#include <stdio.h>

int main()
{
    long long m,n,a,o=1,p=1,q=1,i=1;
    scanf("%lld%lld",&m,&n);
    for(i=1;i<=m;i++){
        o=o*i;
    }
    for(i=1;i<=n;i++){
        p=p*i;
    }
    for(i=1;i<=(m-n);i++){
        q=q*i;
    }
    a=o/(p*q);
    if (n==0||m==0){
        printf("0");
    }
    else if(n>m){
        printf("1");
    }
    else printf("%lld",a);
    return 0;

}