#include <stdio.h>
int jie(int x){
    int i;
    long long s=1;
    if(x==0)
        return 1;
    else{for(i=1;i<=x;i++){
        s*=i;
    }}
    return s;
    }
int main()
{
    int m,n,j;
    long long a,b,c,k,t=1;
    scanf("%d%d",&m,&n);
    for(j=m;j>n;j--){
        t*=j;
    }
    a=jie(m),b=jie(n),c=jie(m-n);
    t=t/c;
    printf("%lld",t);
    return 0;

}