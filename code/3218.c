#include<stdio.h>
int main()
{
    int m,n,i;
    long long int mul,M=1,N=1,s=1;
    scanf("%d%d",&m,&n);
    if(n==1){
    mul=m;
    }
    else{
        for(i=1;i<=m;i++){
        M*=i;
        }
        for(i=1;i<=n;i++){
        N*=i;
        }
        for(i=1;i<=(m-n);i++){
        s*=i;
        }
    mul=M/(N*s);
    }
    printf("%lld",mul);
    return 0;
}